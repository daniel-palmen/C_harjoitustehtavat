#include <stdio.h>

int main(){
    printf("Enter positive numbers or negative to stop: ");
    int read_integer(void);
    printf(read_integer());
}

int read_integer(void){
    int number;
    scanf("%d", &number);
    return number;
}