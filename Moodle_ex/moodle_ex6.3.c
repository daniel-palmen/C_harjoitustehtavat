#include <ctype.h>

int filter_alpha(char *string, int size, char (*getchar_func)(void))
{
    int count = 0;
    int stored = 0;
    char c;

    while (stored < size - 1) {
        c = getchar_func();

        if (c == '\0' || c == '\n') {
            break;
        }

        count++;

        if (isalpha((unsigned char)c)) {
            string[stored] = c;
            stored++;
        }
    }

    string[stored] = '\0';

    return count;
}