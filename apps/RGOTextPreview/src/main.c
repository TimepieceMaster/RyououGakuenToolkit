#include <windows.h>
#include "ryouou_gakuen_toolkit.h"

#define MAIN_WINDOW_CLASS_NAME L"RGO_Text_Preview"
#define PREVIEW_WINDOW_CLASS_NAME L"RGO_Text_Preview_Preview_Image"

#define WINDOW_TITLE L"RGO Text Preview"

#define WINDOW_START_WIDTH 480
#define WINDOW_START_HEIGHT 350

#define PREVIEW_BASE_WIDTH 480
#define PREVIEW_BASE_HEIGHT 272

#define TEXT_BUFFER_SIZE 2048

static BITMAPINFO s_bitmap_info = 
{
	.bmiHeader.biSize = sizeof(BITMAPINFOHEADER),
	.bmiHeader.biWidth = PREVIEW_BASE_WIDTH,
	.bmiHeader.biHeight = PREVIEW_BASE_HEIGHT,
	.bmiHeader.biPlanes = 1,
	.bmiHeader.biBitCount = 32,
	.bmiHeader.biCompression = BI_RGB
};

rgt_arena g_arena_update = {0};

HWND g_preview_window = {0};
HWND g_text_window = {0};
rgt_u8_array g_text = {0};

rgt_image g_preview_image = {0};
rgt_image g_preview_image_base = {0};

rgt_image_array g_glyph_images = {0};
rgt_utf8_string_array g_glyph_strings = {0};
rgt_u32_array g_glyph_widths = {0};

u32 g_preview_width = PREVIEW_BASE_WIDTH;
u32 g_preview_height = PREVIEW_BASE_HEIGHT;

HFONT g_font = NULL;

void
add_menu(HWND window)
{
	HMENU menu = CreateMenu();
	HMENU size_menu = CreateMenu();

	AppendMenu(size_menu, MF_STRING, 1, L"1x");
	AppendMenu(size_menu, MF_STRING, 2, L"2x");
	AppendMenu(size_menu, MF_STRING, 3, L"3x");

	AppendMenu(menu, MF_POPUP, (UINT_PTR)size_menu, L"Window Size");

	SetMenu(window, menu);
}

void
add_text_field(HWND window)
{
	RECT client_rect = {0};
	GetClientRect(window, &client_rect);

	g_text_window = CreateWindowEx
	(
		0, L"EDIT", NULL,
		WS_BORDER | WS_CHILD | WS_VISIBLE | ES_LEFT | ES_MULTILINE,
		0, PREVIEW_BASE_HEIGHT, 
		PREVIEW_BASE_WIDTH, client_rect.bottom - PREVIEW_BASE_HEIGHT, 
		window, NULL, GetModuleHandle(NULL), NULL
	);
}

void
init_preview_window(HWND window)
{
	g_preview_image.width = PREVIEW_BASE_WIDTH;
	g_preview_image.height = PREVIEW_BASE_HEIGHT;
	CreateDIBSection
	(
		GetDC(window), &s_bitmap_info, DIB_RGB_COLORS,
		&g_preview_image.pixels, NULL, 0
	);
}

rgt_image
make_line_of_text(rgt_u16_array glyph_indices)
{
	rgt_image img = {0};
	rgt_create_image(&g_arena_update, 290, 18, &img);
	rgt_fill_image_region(img, 0, 0, img.width, img.height, (rgt_color){.rgba = 0xFF000000});
	u32 dst_x = 0;

	for (u64 i = 0; i < glyph_indices.length; ++i)
	{
		u32 gw = g_glyph_widths.elems[glyph_indices.elems[i]];
		if (dst_x + gw > img.width)
		{
			break;
		}
		if (gw == 0)
		{
			dst_x += 2;
			continue;
		}

		rgt_copy_image_region
		(
			g_glyph_images.elems[glyph_indices.elems[i]],
			img, 0, 0, dst_x, 0, 
			gw, 18
		);
		dst_x += gw;
		++dst_x;
	}

	return img;
}

void draw_text_in_textbox(void)
{
	rgt_string_array text_lines = {0};
	rgt_text_to_lines(&g_arena_update, g_text, &text_lines);
	
	u64 num_lines = (text_lines.length > 3) ? 3 : text_lines.length;
	rgt_u16_array glyph_indices[3] = {0};
	for (u64 i = 0; i < num_lines; ++i)
	{
		u64 pos = 0;
		rgt_utf8_string utf8 = {0};
		rgt_u16_array glyph_indices = {0};
		rgt_read_utf8_string(&g_arena_update, text_lines.elems[i], &pos, &utf8);
		rgt_utf8_to_glyph_indices(&g_arena_update, utf8, g_glyph_strings, &glyph_indices);
		rgt_image text_img = make_line_of_text(glyph_indices);

		rgt_copy_image_region_2
		(
			text_img, g_preview_image, 
			0, 0, 126, 205 + (18 * (u32)i), text_img.width, text_img.height,
			(rgt_color){.rgba = 0xFF000000 }
		);
	}
}

void update_preview_window(HWND window)
{
	PAINTSTRUCT paint_info = {0};
	paint_info.hdc = GetDC(window);
	GetClientRect(window, &paint_info.rcPaint);

	rgt_copy_image_region(g_preview_image_base, g_preview_image, 0, 0, 0, 0, PREVIEW_BASE_WIDTH, PREVIEW_BASE_HEIGHT);
	draw_text_in_textbox();
	rgt_flip_image_vertically(g_preview_image);
	rgt_rgba_to_bgra(g_preview_image);

	HDC device_context = BeginPaint(window, &paint_info);
	StretchDIBits
	(
		device_context, 0, 0,
		g_preview_width, g_preview_height, 0, 0, 
		PREVIEW_BASE_WIDTH, PREVIEW_BASE_HEIGHT, 
		g_preview_image.pixels, &s_bitmap_info, DIB_RGB_COLORS,
		SRCCOPY
	);
	EndPaint(window, &paint_info);

	rgt_reset_arena(&g_arena_update);
}

LRESULT 
preview_window_procedure(HWND window, UINT message, WPARAM w_param, LPARAM l_param)
{
	switch(message)
	{
	case WM_CREATE:
		init_preview_window(window);
	case WM_PAINT:
		update_preview_window(window);
		break;
	}

	return DefWindowProc(window, message, w_param, l_param);
}

void add_preview_window(HWND window)
{
	RECT client_rect = {0};
	GetClientRect(window, &client_rect);

	WNDCLASSEX window_class = {0};
	window_class.cbSize = sizeof(WNDCLASSEX);
	window_class.style = CS_OWNDC;
	window_class.lpfnWndProc = preview_window_procedure;
	window_class.hInstance = GetModuleHandle(NULL);
	window_class.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	window_class.lpszClassName = PREVIEW_WINDOW_CLASS_NAME;

	RegisterClassEx(&window_class);

	g_preview_window = CreateWindowEx
	(
		0, PREVIEW_WINDOW_CLASS_NAME, NULL,
		WS_CHILD | WS_VISIBLE,
		0, 0, PREVIEW_BASE_WIDTH, PREVIEW_BASE_HEIGHT, window, 
		NULL, GetModuleHandle(NULL), NULL
	);
}

void
update_text(HWND text_field)
{
	WCHAR field_text[512] = {0};

	GetWindowText
	(
		text_field, field_text, sizeof(field_text) / sizeof(field_text[0])
	);
	g_text.length = WideCharToMultiByte
	(
		CP_UTF8, WC_ERR_INVALID_CHARS, 
		field_text, -1, g_text.elems, TEXT_BUFFER_SIZE, "?", NULL
	);
	--g_text.length;
	InvalidateRect(g_preview_window, NULL, false);
}

LRESULT 
main_window_procedure
(
	HWND window, UINT message, WPARAM w_param, LPARAM l_param
)
{
	switch(message)
	{
	case WM_CLOSE:
		PostQuitMessage(0);
		break;
	case WM_CREATE:
		add_menu(window);
		add_text_field(window);
		add_preview_window(window);
		InvalidateRect(g_preview_window, NULL, false);
		break;
	case WM_COMMAND:
		if (HIWORD(w_param) == EN_CHANGE)
		{
			update_text((HWND)l_param);
			break;
		}
		
		if (w_param >= 1 && w_param <= 3)
		{
			RECT rect = {0};
			rect.right = WINDOW_START_WIDTH * (LONG)w_param;
			rect.bottom = WINDOW_START_HEIGHT * (LONG)w_param;
			AdjustWindowRect(&rect, WS_OVERLAPPEDWINDOW, true);
			int width = rect.right - rect.left;
			int height = rect.bottom - rect.top;

			SetWindowPos(window, HWND_TOP, 0, 0, width, height, SWP_NOMOVE);
		}
		break;
	case WM_SIZE:
	{
		u32 width = LOWORD(l_param);
		u32 height = HIWORD(l_param);

		g_preview_width = width;
		g_preview_height = (u32)(((double)PREVIEW_BASE_HEIGHT / (double)WINDOW_START_HEIGHT) * height);

		SetWindowPos(g_preview_window, HWND_TOP, 0, 0, g_preview_width, g_preview_height, 0);
		SetWindowPos(g_text_window, HWND_BOTTOM, 0, g_preview_height, width, height - g_preview_height, 0);


		if (g_font)
		{
			DeleteObject(g_font);
		}
		g_font = CreateFont
		(
			0, (height - g_preview_height) / 12, 
			0, 0, FW_DONTCARE, false, false, false, 
			DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, 
			DEFAULT_QUALITY, DEFAULT_PITCH | FF_DONTCARE, NULL
		);
		SendMessage(g_text_window, WM_SETFONT, (WPARAM)g_font, (LPARAM)true);

		InvalidateRect(g_preview_window, NULL, false);
		break;
	}
	}
	return DefWindowProc(window, message, w_param, l_param);
}

void
load_assets(rgt_arena *arena)
{
	rgt_load_png(arena, "resources\\preview_base.png", &g_preview_image_base);

	rgt_image font_img = {0};
	rgt_load_png(arena, "resources\\font.png", &font_img);
	rgt_composite_to_glyph_images(arena, font_img, &g_glyph_images);

	rgt_create_array(arena, g_glyph_images.length, 4, &g_glyph_widths);
	for (u64 i = 0; i < g_glyph_images.length; ++i)
	{
		g_glyph_widths.elems[i] = rgt_get_glyph_width(g_glyph_images.elems[i]);
	}

	rgt_u8_array font_strings_file = {0};
	rgt_string_array font_strings = {0};
	rgt_load_file(arena, "resources\\font_strings.txt", &font_strings_file);
	rgt_text_to_lines(arena, font_strings_file, &font_strings);

	rgt_create_array
	(
		arena, font_strings.length, sizeof(rgt_utf8_string), &g_glyph_strings
	);
	for (u64 i = 0; i < font_strings.length; ++i)
	{
		u64 pos = 0;
		rgt_read_utf8_string
		(
			arena, font_strings.elems[i], &pos, &g_glyph_strings.elems[i]
		);
	}
}

void
create_main_window(void)
{
	WNDCLASSEX window_class = {0};
	window_class.cbSize = sizeof(WNDCLASSEX);
	window_class.style = CS_HREDRAW | CS_VREDRAW;
	window_class.lpfnWndProc = main_window_procedure;
	window_class.hInstance = GetModuleHandle(NULL);
	window_class.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	window_class.lpszClassName = MAIN_WINDOW_CLASS_NAME;

	RegisterClassEx(&window_class);

	DWORD window_style = WS_OVERLAPPEDWINDOW | WS_VISIBLE;
	RECT window_rect = {0};
	window_rect.right = WINDOW_START_WIDTH;
	window_rect.bottom = WINDOW_START_HEIGHT;

	AdjustWindowRectEx(&window_rect, window_style, true, 0);

	CreateWindowEx
	(
		0, MAIN_WINDOW_CLASS_NAME, WINDOW_TITLE, window_style, 
		CW_USEDEFAULT, CW_USEDEFAULT, 
		window_rect.right - window_rect.left, 
		window_rect.bottom - window_rect.top, 
		NULL, NULL, GetModuleHandle(NULL), NULL
	);
}

int 
WinMain
(
	HINSTANCE instance, HINSTANCE prev_instance, LPSTR cmd_line, int show_cmd
)
{
	rgt_arena arena_init = {0};

	rgt_create_arena(RGT_MEGABYTE(1), &arena_init);
	rgt_create_arena(RGT_MEGABYTE(1), &g_arena_update);

	load_assets(&arena_init);

	SetProcessDPIAware();

	MSG message = {0};
	create_main_window();
	rgt_create_array(&arena_init, TEXT_BUFFER_SIZE, 1, &g_text);

	while(GetMessage(&message, NULL, 0, 0))
	{
		if(message.message == WM_KEYDOWN)
		{
			if (message.wParam == 'A' && GetKeyState(VK_CONTROL) < 0)
			{
				SendMessageW(g_text_window, EM_SETSEL, 0, -1);
			}
		}   
		TranslateMessage(&message);
		DispatchMessage(&message);
	}

	rgt_destroy_arena(&arena_init);
	rgt_destroy_arena(&g_arena_update);

	return (int)message.wParam;
}
