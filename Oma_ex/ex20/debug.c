#include "debug.h"
#include <stdio.h>

void set_debug_level(int debug_level){
    static int s_debug_level;
    s_debug_level = debug_level;
}

int dprintf(int debug_level, const char *fmt, ...){

}