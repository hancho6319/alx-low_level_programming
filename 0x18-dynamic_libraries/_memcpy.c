#include <stdio.h>

void *_memcpy(void *dest, const void *src, size_t n) {
    char *dst_ptr = dest;
    const char *src_ptr = src;
    while (n--) {
        *dst_ptr++ = *src_ptr++;
    }
    return dest;
}
