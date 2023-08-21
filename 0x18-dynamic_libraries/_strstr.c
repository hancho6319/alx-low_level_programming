#include <string.h>

char *_strstr(const char *haystack, const char *needle) {
    for (; *haystack; ++haystack) {
        const char *hay = haystack, *ned = needle;
        while (*hay && *hay == *ned) {
            ++hay;
            ++ned;
        }
        if (!*ned) {
            return (char *) haystack;
        }
    }
    return NULL;
}
