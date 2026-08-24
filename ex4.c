#include <stdio.h>

int read_integer(void){
    int number;
    scanf("%d", &number);
    if(number >= 1){
        return number;
    }
    else if(number < 0){
        /*end clause*/
        return 0;
    }
    else{
        printf("invalid input.");
        return 0;
    }
}

int main(){
    int sum;
    int counter;
    float average;
    printf("Enter positive numbers or negative to stop: ");
    int number = read_integer();
    if(number > 0){
        counter++;
        sum = sum + number;
        average = sum / counter;
    }
    else if(number < 0){
        //*end loop
    }
    
    printf("You entered %d positive numbers. The average is: %.2f", number, average);
}