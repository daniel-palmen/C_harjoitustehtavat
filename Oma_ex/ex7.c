#include <stdio.h>
#include <stdbool.h>

bool read_positive(int *value);

int main(){
    int value;
    int counter = 0;
    int money;
    bool entry;
    while(counter < 3){
        printf("Guess how much money I have!\n");
        entry = read_positive(&value);
        if(entry == 1){
            money = 2 * value + 20;
            printf("You didn't get it right. I have %d euros.\n", money);
        }
        else if(entry == 0){
            counter ++;
        }
    }
    printf("I give up! See you later!");

}

bool read_positive(int *value){
    int result;
    int number;
    printf("Enter a positive number: ");
    result = scanf("%d", &number);
    if(result != 1 || number < 0){
        printf("Incorrect input\n");
        while(getchar() != '\n');
        return 0;
    }
    else{
        *value = number;
        return 1;
    }
}