#include <stdio.h>

int main(){
    int stop = 0;
    char str[200];
    int i = 0;

    while(stop != 1){
        printf("Enter a string: ");
        fgets(str, sizeof(str), stdin);
        for(i = 0; str[i] != '\n'; i++){
            if(str[i] == '\n'){
                str[i] = '\0';
            }
        }
        if(str[0] == 's' &&
        str[1] == 't' &&
        str[2] == 'o' &&
        str[3] == 'p'){
            stop = 1;
        }
        else{
            printf("String is %d long.\n", i);
        }
    }
    printf("Goodbye!\n");
}