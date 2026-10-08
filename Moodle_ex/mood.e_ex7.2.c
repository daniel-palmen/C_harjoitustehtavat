#include <stdio.h>

typedef enum{
    logCritical,
    logWarning,
    logInfo,
    logVerbose
} loglevel;

static loglevel log_level;

void set_log_level(loglevel level);

int log_message(loglevel level, const char *format, ...);

const char *log_level_to_str(loglevel level);

int main(){

}

int log_message(loglevel level, const char *format, ...){

}


const char *log_level_to_str(loglevel level){
    
}