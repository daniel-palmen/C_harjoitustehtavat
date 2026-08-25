#include <stdio.h>

int main(){
    int number = 1;
    float sum = 0;
    float counter = 0;
    float average = 0;
    while(number > 0){
        scanf("%d", &number);
        if(number > 0){
            counter ++;
            sum = sum + number;
        }
    }
    average = sum / counter;
    printf("%.4f\n", average);
}