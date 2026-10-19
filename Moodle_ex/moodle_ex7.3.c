#include <stdio.h>

typedef struct{
    const char *text;
    int position;
} text_reader_ctx;

void text_reader_init(text_reader_ctx *ctx, const char *str);

int text_reader_read(text_reader_ctx *ctx, char *buffer, int size);