#include <stdio.h>

int main(){
    char raw_line[100];
    int value_1;
    int value_1_size;
    int value_2;
    int value_2_size;
    char *command;
    fgets(raw_line, 100, stdin);
    printf(raw_line);
    for(int i = 0; i < raw_line; i++){
        if(raw_line[i] != ' '){
            value_1_size ++;
        }

    }

    printf("value 1 size: %d", value_1_size);
}