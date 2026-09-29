#include "debug.h"
#include <stdio.h>

int main(){
    char input[100];
    int number = 0;
    int correct = 0;
    while(correct == 0){
        printf("Enter debug level in range 0-4: ");
        fgets(input, 100, stdin);
        if(sscanf(input, "%d", &number) == 1){
            if(number >= 0 && number <= 4){
                correct = 1;
            }
            else{
                printf("Incorrect input.\n");
            }
        }
        else{
            printf("Incorrect input.\n");
        }
    }
    set_debug_level(number);

}