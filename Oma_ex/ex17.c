#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define lim 32

bool generator(char *pointer, int size, const char *word);

int main(){
    srand(time(NULL));
    char *pointer;
    int size = 100;
    const char word[lim];
    int end = 0;
    while(end == 0){
        printf("Give word to make password: ");
        scanf("%s", &word);
        if(word[0] == 's' && word[1] == 't' && word[2] == 'o' && word[3] == 'p'){
            printf("Thank you, Bye!");
            end = 1;
        }
        else if(generator(pointer, size, word)){
            printf("%s\n", pointer);
        }
        else{
            printf("The password generation failed.\n");
        }

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
            random = (rand() % 94) + 33;
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