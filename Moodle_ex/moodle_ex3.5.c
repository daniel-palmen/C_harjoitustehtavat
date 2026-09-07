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
    int check_1 = 0;
    int check_2 = 0;
    fgets(raw_line, 20, stdin);
    check_1 = sscanf(raw_line, "%d", &value_1);
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
        if(raw_line[i] == '\n'){
            raw_line[i] = '\0';
        }
    }

    new_line[j] = '\0';
    command_line[k] = '\0';

    check_2 = sscanf(new_line, "%d", &value_2);
    if(check_1 != 1){
        printf("Input: \"%s\" Invalid argument in position: 1", raw_line);
    }
    else if(check_2 != 1){
        printf("Input: \"%s\" Invalid argument in position: 2", raw_line);
    }
    else if(k > 4){
        printf("Input: \"%s\" Unknown command: %s", raw_line, command_line);
    }
    else if(command_line[0] == 'a' &&
    command_line[1] == 'd' &&
    command_line[2] == 'd'){
        result = value_1 + value_2;
        printf("%d + %d = %d\n", value_1, value_2, result);
    }
    else if(command_line[0] == 's' &&
    command_line[1] == 'u' &&
    command_line[2] == 'b'){
        result = value_1 - value_2;
        printf("%d - %d = %d\n", value_1, value_2, result);
    }
    else if(command_line[0] == 'm' &&
    command_line[1] == 'u' &&
    command_line[2] == 'l'){
        result = value_1 * value_2;
        printf("%d * %d = %.d\n", value_1, value_2, result);
    }
    else if(command_line[0] == 'd' &&
    command_line[1] == 'i' &&
    command_line[2] == 'v'){
        result = value_1 / value_2;
        printf("%d / %d = %d\n", value_1, value_2, result);
    }
    else{
        printf("Input: \"%s\" Unknown command: %s", raw_line, command_line);
    }
}