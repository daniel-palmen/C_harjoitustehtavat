#include <stdio.h>

int replace_char(char *str, char *repl);

int main(){
    char str[200];
    char repl[3];
    int value = 0;
    printf("Give string to modify: ");
    fgets(str, 200, stdin);
    printf("Give modifiers: ");
    fgets(repl, 3, stdin);
    if(repl[0] == '\n' || repl[1] == '\n'){
        printf("The string was not modified.\n");
    }
    else{
        value = replace_char(str, repl);
        if(value == 0){
            printf("The string was not modified.\n");
        }
        else{
            printf("String was modified %d times.\n", value);
            for(int i = 0; str[i] != '\n';i ++){
                printf("%c",str[i]);
            }
        }
    }
}

int replace_char(char *str, char *repl){
    char old = repl[0];
    char new = repl[1];
    int count = 0;
    for(int i = 0; str[i] != '\n'; i++){
        if(str[i] == old){
            str[i] = new;
            count ++;
        }
    }
    return count;
}