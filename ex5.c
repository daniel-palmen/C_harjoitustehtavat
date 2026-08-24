#include <stdio.h>

int main(){
    int low = 1;
    int high = 6;
    int number = 0;
    int counter = 0;
    printf("Let's play!\n");
    while(counter < 3){
        printf("Roll a die and enter your result.\n");
        printf("Enter a number between %d - %d: ", low, high);
        number = read_range(low, high);
        if(number > 0){
            if(number == high){
                printf("I got a %d. It's a tie!\n", number);
            }
            else{
                printf("I got a %d. I win!\n", number + 1);
            }
            counter++;
        }
    }
    printf("Better luck next time. Bye!");
}

int read_range(int low, int high){
    int number;
    int result;
    result = scanf("%d", &number);
    if(result != 1){
        printf("Enter a number.\n");
        while(getchar() != '\n');
        return 0;
    }
    else{
        if(number >= low && number <= high){
            return number;
        }
        else if(number < low){
            printf("Entered value is too low.\n");
            return 0;
        }
        else if(number > high){
            printf("Entered value is too high.\n");
            return 0;
        }
    }
}
