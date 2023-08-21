int _atoi(const char* str) {
    int num = 0;
    int sign = 1;

    // skip leading whitespace
    while (*str == ' ' || *str == '\t' || *str == '\n')
        str++;

    // check sign
    if (*str == '-' || *str == '+') {
        if (*str == '-')
            sign = -1;
        str++;
    }

    // convert digits to number
    while (*str >= '0' && *str <= '9') {
        num = num * 10 + (*str - '0');
        str++;
    }

    return sign * num;
}
