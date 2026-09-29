#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define lim 32

bool generator(char *pointer, int size, const char *word);

int main(){
    srand(time(NULL));
    char *pointer;
    int size;
    const char word[lim];
    int end = 0;
    while(end == 0){
        printf("Give word to make password: ");
        scanf("%s", &word);


    }
}

bool generator(char *pointer, int size, const char *word){
    // #w#o#r#d#
    if(size <= sizeof(word) * 2 + 1){
        return false;
    }
    int toggle = 0;
    int k = 0;
    char random;
    for(int i = 0; i < size; i++){
        if(toggle == 0){
            random = rand() % 256;
            pointer[i] = random;
            toggle = 1;
        }
        else if(toggle == 1){
            pointer[i] = word[k];
            k++;
            toggle = 0;
        }
    }
    return true;
}