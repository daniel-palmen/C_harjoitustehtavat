#include <stdio.h>
#include <string.h>

int count_words(const char *str, const char *word);

int main(){
    int stop = 0;
    while(stop != 1){
        char str[200];
        char word[200];
        int count = 0;
        printf("Enter a string: ");
        fgets(str, 200, stdin);
        printf("Enter a word: ");
        fgets(word, 200, stdin);
        for(int i = 0; word[i] != '\0';i++){
            if(word[i] == '\n'){
                word[i] = '\0';
            }
        }
        if(word[0] == 's' &&
        word[1] == 't' &&
        word[2] == 'o' &&
        word[3] == 'p'){
            stop = 1;
        }
        else{
            count = count_words(str, word);
            printf("Word occurred %d times.\n", count);
        }
    }
    printf("Goodbye!\n");
}

int count_words(const char *str, const char *word){
    int count = 0;
    const char *temp = str;
    while(temp = strstr(temp, word)){
        count++;
        temp++;
    }
    return count;
}