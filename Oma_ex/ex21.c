#include <stdio.h>
#define MAX 100

int main(){
    char file_name[MAX];
    FILE *file;

    pritnf("Anna tiedoston nimi: ");
    fgets(file_name, MAX, stdin);
    for(int i = 0; file_name[i] != '\0'; i++){
        if(file_name[i] == '\n'){
            file_name[i] = '\0';
        }
    }
    file = fopen(file_name, "r");
}