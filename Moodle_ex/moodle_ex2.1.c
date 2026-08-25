#include <stdio.h>

int find_largest(int *numbers, int count);

int main(){
    int array[3] = {1, 2, 3};

    printf("%d\n", find_largest(array, 3));
}

int find_largest(int *numbers, int count){
    int largest = numbers[0];
    for(int i = 0; i < count; i++){
        if(numbers[i] > largest){
            largest = numbers[i];
        }
    }
    return largest;
}