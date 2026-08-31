#include <stdio.h>

int main() {
    char raw_line[20];
    char new_line[20];
    char command_line[20];
    int j = 0;
    int k = 0;
    int start = 0;
    int value_1 = 0;
    int value_2 = 0;
    int result = 0;
    fgets(raw_line, 20, stdin);
    sscanf(raw_line, "%d", &value_1);
    for(int i = 0; raw_line[i] != '\0'; i++){
        if(raw_line[i] == ' '){
            start++;
        }
        if(start == 1){
            new_line[j] = raw_line[i];
            j++;
        }
        if(start == 2 && raw_line[i] != ' '){
            command_line[k] = raw_line[i];
            k++;
        }
    }

    new_line[j] = '\0';
    command_line[k] = '\0';

    sscanf(new_line, "%d", &value_2);

    if(command_line[0] == 'a' &&
    command_line[1] == 'd' &&
    command_line[2] == 'd'){
        result = value_1 + value_2;
        printf("%d\n", result);
    }
    else if(command_line[0] == 's' &&
    command_line[1] == 'u' &&
    command_line[2] == 'b'){
        result = value_1 - value_2;
        printf("%d\n", result);
    }
    else if (command_line[0] == 'd')
}