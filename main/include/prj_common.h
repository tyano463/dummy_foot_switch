#ifndef __PRJ_COMMON_H__
#define __PRJ_COMMON_H__

#define d(s, ...)                                                                    \
    do                                                                               \
    {                                                                                \
        printf("%s(%d) %s " s "\n", __FILENAME__, __LINE__, __func__, ##__VA_ARGS__); \
        fflush(stdout);                                                              \
    } while (0)

#define ERR_RETn(c)            \
    do                         \
    {                          \
        if (c)                 \
            goto error_return; \
    } while (0)

#endif