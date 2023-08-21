#include <stdio.h>
#include <string.h>

size_t _strspn(const char *str1, const char *str2) {
    const char *p = str1;
    size_t count = 0;
    int found = 0;
    
    while (*p != '\0') {
        found = 0;
        const char *q = str2;
        
        while (*q != '\0') {
            if (*p == *q) {
                found = 1;
                break;
            }
            q++;
        }
        
        if (found == 0) {
            break;
        }
        
        count++;
        p++;
    }
    
    return count;
}
