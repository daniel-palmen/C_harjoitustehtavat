#include <stdio.h>

void replace(char *str);

int main(){
    char str[] = "This is a t-test";
    replace(str);
    printf("%s\n", str);
}

void replace(char *str){
    int lenght = 0;
    for(lenght = 0; str[lenght] != '\0'; lenght ++);
    for(int i = 0; i < lenght; i ++){
        if(str[i] == 't'){
            str[i] = '*';
        }
    }
}