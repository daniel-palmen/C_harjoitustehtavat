#include <stdio.h>
#include <string.h>
#define MAX 100

int main(){
    char file_name[MAX];
    FILE *file;
    char line[MAX];

    pritnf("Anna tiedoston nimi: ");
    fgets(file_name, MAX, stdin);
    for(int i = 0; file_name[i] != '\0'; i++){
        if(file_name[i] == '\n'){
            file_name[i] = '\0';
        }
    }
    file = fopen(file_name, "r");

    while(!feof(file)){
        if(fgets(line, MAX, file)!= NULL){
            if(line[0]=='$' && strchr(line, '*') != NULL){

            }

        }
    }

    fclose(file);
}