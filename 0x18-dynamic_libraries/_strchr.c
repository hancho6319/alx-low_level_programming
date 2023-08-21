#include <stdio.h>

char *_strchr(const char* str, int c) {
    char ch = c;
    while (*str != '\0') {
        if (*str == ch) {
            return (char*)str; // Found the character
        }
        str++; // Move to the next character
    }
    if (*str == ch) {
        return (char*)str; // Return pointer to null character
    }
    return NULL; // Character not found
}
