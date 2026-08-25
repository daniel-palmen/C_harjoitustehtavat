#include <stdio.h>

int read_integer(void);

int main(){
    int number;
    float sum = 0;
    int counter = 0;
    float average = 0;
    while(number >= 0){
        printf("Enter positive numbers or negative to stop: ");
        number = read_integer();
        if(number > 0){
            counter++;
            sum = sum + number;
            average = sum / counter;
        }
    }
    printf("You entered %d positive numbers. The average is: %.2f", counter, average);
}

int read_integer(void){
    int number;
    int result;
    result = scanf("%d", &number);
    if(result != 1){
        printf("invalid input.\n");
        while(getchar() != '\n');
        return 0;
    }
    else{
        if(number >= 1){
            return number;
        }
        else if(number < 0){
            /*end clause*/
            return -1;
        }
    }
}