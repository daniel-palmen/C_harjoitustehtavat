#include <stdio.h>
#include <string.h>
#define MAX 100

int main(){
    char file_name[MAX];
    char input[MAX];

    pritnf("Anna tiedoston nimi: ");
    fgets(input, MAX, stdin);
    strcpy(input, file_name);
    file_name[strcspn(file_name, "\n")] = '\0';
}