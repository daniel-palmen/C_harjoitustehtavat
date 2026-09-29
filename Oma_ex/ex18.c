#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char input[100];
    int number = 0;
    int random;
    srand(time(NULL));
    while(number >= 0){
        printf("Give number between 0-15: ");
        fgets(input, 100, stdin);
        if(sscanf(input, "%d", &number) == 1){
            if(number < 0){
                printf("Ending program.");
            }
            else if(number >= 0 && number <= 15){
                random = rand();
                printf("Random hex value: %x\n", random);
                random = random >> number;
                random = random & 0x3F;
                printf("Result: %04x\n",random);
            }
            else{
                printf("Incorrect input\n");
            }
        }
        else{
            printf("Incorrect input\n");
        }
    }
}