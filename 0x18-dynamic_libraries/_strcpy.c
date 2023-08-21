char *_strcpy(char* dest, const char* src) {
    char* dest_ptr = dest;
    const char* src_ptr = src;
    while (*src_ptr != '\0') {
        *dest_ptr = *src_ptr;
        dest_ptr++;
        src_ptr++;
    }
    *dest_ptr = '\0';
    return dest;
}
