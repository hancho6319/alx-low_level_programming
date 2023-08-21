char *_strncpy(char* destination, const char* source, size_t n) {
    char *start = destination;
    while (n-- && (*destination++ = *source++));
    if (n > 0) {
        while (--n) {
            *destination++ = '\0';
        }
    }
    return start;
}
