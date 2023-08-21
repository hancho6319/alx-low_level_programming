#include <stddef.h>
#include <string.h>

char *_strncat(char* destination, const char* source, size_t num)
{
    size_t destLen = strlen(destination);
    size_t i;

    for (i = 0 ; i < num && source[i] != '\0' ; i++)
        destination[destLen + i] = source[i];
    destination[destLen + i] = '\0';

    return destination;
}
