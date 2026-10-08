#include <stdio.h>

int printd(const char *format, ...);

int main(){

    int count = printd("%c %c\n", 'a', 65);
    printf("Count: %d\n", count);

}

int printd(const char *format, ...){
    va_list args;
    int prefix_count = printf("DEBUG: ");
    if (prefix_count < 0) {
        return prefix_count;
    }
    va_start(args, format);
    int body_count = vprintf(format, args);
    va_end(args);

    if (body_count < 0) {
        return body_count;
    }

    return prefix_count + body_count;
}