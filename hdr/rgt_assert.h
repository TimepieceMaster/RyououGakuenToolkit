#ifndef RGT_ASSERT_H
#define RGT_ASSERT_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

#define RGT_ASSERT(condition, error) \
do                                   \
{                                    \
    if (!(condition))                \
    {                                \
        result = error;              \
        goto finish;                 \
    }                                \
} while(0)

#define RGT_THROW(error) \
do                       \
{                        \
    result = error;      \
    goto finish;         \
} while(0)

#define RGT_EARLY_RETURN goto finish

#define RGT_CALL(func) \
do                               \
{                                \
    result = func;               \
    if (result != RGT_SUCCESS)   \
    {                            \
        goto finish;             \
    }                            \
} while(0)

#define RGT_FOPEN(file, path, mode)               \
do                                                \
{                                                 \
    file = fopen(path, mode);                     \
    RGT_ASSERT((file), RGT_FILE_OPEN_ERROR);      \
} while(0)

#define RGT_FCLOSE(file)                          \
do                                                \
{                                                 \
    if (file)                                     \
    {                                             \
        if (fclose(file) != 0)                    \
        {                                         \
	        result = RGT_FILE_CLOSE_ERROR;        \
        }                                         \
    }                                             \
} while(0)

#define RGT_FREAD(buffer, size, file)                                   \
do                                                                      \
{                                                                       \
    RGT_ASSERT(fread(buffer, size, 1, file) == 1, RGT_FILE_READ_ERROR); \
} while(0)

#define RGT_FWRITE(buffer, size, file)                                    \
do                                                                        \
{                                                                         \
    RGT_ASSERT(fwrite(buffer, size, 1, file) == 1, RGT_FILE_WRITE_ERROR); \
} while(0)

#define RGT_FPRINTF(...)                                         \
do                                                               \
{                                                                \
    RGT_ASSERT(fprintf(__VA_ARGS__) >= 0, RGT_FILE_WRITE_ERROR); \
} while(0)                                                       \

#endif