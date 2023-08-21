#include <stdio.h>
#include <string.h>

char *_strcat(char *dest, const char *src)
{
    size_t i, j;
    i = strlen(dest);
    for (j = 0; src[j] != '\0'; j++)
        dest[i + j] = src[j];
    dest[i + j] = '\0';
    return dest;
}
