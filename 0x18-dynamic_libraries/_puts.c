#include <stdio.h>

int _puts(const char *str)
{
    int result = 0;

    while (*str != '\0')
    {
        if (putchar(*str++) == EOF)
        {
            result = EOF;
            break;
        }
        result++;
    }

    if (putchar('\n') == EOF)
    {
        result = EOF;
    }

    return result;
}
