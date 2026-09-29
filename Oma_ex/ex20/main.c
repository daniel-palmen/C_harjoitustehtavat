#include "debug.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char input[100];
    int number = 0;
    int correct = 0;
    int random;
    char *message;
    srand(time(NULL));
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
    while(correct < 5){
        random = rand() % 4;
        sprintf(message, "%d.Message",correct);
        dprintf(random, message);
        correct ++;
    }
}