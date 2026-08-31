#include <stdio.h>

int count(char *str);

int main(){
    char str[] = "I have only one uppercase letter";
    printf("%d", count(str));
}

int count(char *str){
    int counter = 0;
    int lenght = 0;
    for(lenght = 0; str[lenght] != '\0'; lenght ++);
    for(int i = 0; i < lenght; i++){
        if (str[i]>64 && str[i]<91){
            counter ++;
        }     
    }
    return counter;
}