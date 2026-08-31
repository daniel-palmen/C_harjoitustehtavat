#include <stdio.h>

void merge_whitespace(char *str);

int main(){
    char str[] = "This is a test.   Whole  lot a  spaces going on.";
    merge_whitespace(str);
    printf("%s\n", str);
}

void merge_whitespace(char *str){
    int lenght = 0;
    int multiples_on = 0;
    int j = 0;
    for(lenght = 0; str[lenght] != '\0'; lenght++);
    for(int i = 0; i < lenght; i++){
        if(str[i] != '\t' && str[i] != '\r' && str[i] != '\n' && str[i] != ' '){
            str[j++] = str[i];
            multiples_on = 0;
        }
        else if(multiples_on == 0){
            str[j++] = ' ';
            multiples_on = 1;
        }
    }
    str[j] = '\0';
}