#include "debug.h"
#include <stdio.h>

static int s_debug_level;

void set_debug_level(int debug_level){
    s_debug_level = debug_level;
}

int dprintf(int debug_level, const char *fmt, ...){
    if(debug_level > s_debug_level){
        return 0;
    }
    else if(debug_level <= s_debug_level){
        fprintf(stderr, "[DBG%d] %s\n", debug_level, fmt);
    }
}