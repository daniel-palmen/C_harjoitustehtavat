#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_numbers(const int *array, int count);

int main(){
    int count = 15;
    int array[count - 1];
    int maximum = 99999999;
    srand(time(NULL));
    for(int i = 0; i < count; i++){
        array[i] = rand() % (maximum + 1);
    }
    print_numbers(array, count);

}

void print_numbers(const int *array, int count){   
    for(int i = 0; i < count; i++){
        printf("%8d\n", array[i]);
    }
}