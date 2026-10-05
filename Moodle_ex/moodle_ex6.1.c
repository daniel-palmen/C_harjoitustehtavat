#include <stdio.h>

int print_string(const char *str, void (*print_char)(char)) {
    if (str == NULL || print_char == NULL) {
        return 0;
    }

    int count = 0;
    while (*str != '\0') {
        print_char(*str);
        count++;
        str++;
    }

    return count;
}