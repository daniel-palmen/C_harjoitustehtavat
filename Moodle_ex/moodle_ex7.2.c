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

const char *log_level_to_str(loglevel level){
    switch (level) {
        case logCritical: return "Critical";
        case logWarning:  return "Warning";
        case logInfo:     return "Info";
        case logVerbose:  return "Verbose";
        default:          return "Unknown";
    }
}

int log_message(loglevel level, const char *format, ...){
    if (level > log_level) {
        return 0;
    }
    int count = 0;
    int prefix_count = printf("LOG[%s]: ", log_level_to_str(level));
    if (prefix_count < 0) {
        return prefix_count;
    }
    count += prefix_count;

    va_list args;
    va_start(args, format);
    int msg_count = vprintf(format, args);
    va_end(args);

    if (msg_count < 0) {
        return msg_count;
    }
    count += msg_count;

    return count;
}