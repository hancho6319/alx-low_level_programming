#include <string.h>

char *_strpbrk(const char *str1, const char *str2) {
    const char *p1 = str1;
    const char *p2;

    while (*p1) {
        p2 = str2;
        while (*p2) {
            if (*p1 == *p2) {
                return (char *)p1;
            }
            p2++;
        }
        p1++;
    }

    return NULL;
}
