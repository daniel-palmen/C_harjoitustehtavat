#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int find_first(const unsigned int *array, unsigned int what);

int main(){
    int count = 20;
    unsigned int array[count - 1];
    int maximum = 20;
    int i = 0;
    unsigned int what = 1;
    int result = 0;
    srand(time(NULL));
    for(i = 0; i < count; i++){
        array[i] = (rand() % maximum) + 1;
    }
    array[i-1] = 0;

    while(what != 0){
        printf("Give number to search for: ");
        scanf("%d", &what);
        if(what != 0){
            result = find_first(array, what);
            if(result == -1){
                printf("Not found\n");
            }
            else{
                printf("%d is found in index %d\n", what, result);
            }
        }
    }
    for(int j = 0; j < i; j++){
        printf("%3d ", array[j]);
        if((j + 1) % 5 == 0 && j != 0){
            printf("\n");
        }
    }
    printf("Goodbye!\n");
}

int find_first(const unsigned int *array, unsigned int what){
    int i = 0;
    int result;
    for(i = 0; array[i] != 0; i++){
        if(array[i] == what){
            result = i;
            return result;
        }
    }
    result = -1;
    return result;
}