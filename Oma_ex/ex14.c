#include <stdio.h>
#include <ctype.h>
#define MAX_LINE_SIZE 80
#define MAX_COUNT 100

int main(){
    int count = 0;
    int end = 0;
    char line[MAX_LINE_SIZE];
    char name[MAX_LINE_SIZE];
    char mem[MAX_COUNT][MAX_LINE_SIZE];
    char ready_char;
    FILE *file;
    printf("Enter file name: ");
    fgets(name, MAX_LINE_SIZE, stdin);
    for(int i = 0; name[i] != '\0'; i++){
        if(name[i] == '\n'){
            name[i] = '\0';
        }
    }
    file = fopen(name, "r");
    if(file == NULL){
        //error message
        fprintf(stderr, "Opening file \"%s\" failed.\n", name);
    }
    while(!feof(file) && count < MAX_COUNT){
        if(fgets(line, MAX_LINE_SIZE, file) != NULL){
            for (int i = 0; line[i] != '\0'; i++) {
                mem[count][i] = line[i];
                end = i;
            }
            mem[count][end + 1] = '\0';
            count++;
        }
        if(ferror(file) != 0){
            fprintf(stderr,"Error while reading file.\n");
        }
    }
    fclose(file);
    file = fopen(name, "w");
    if(file == NULL){
        //error message
        fprintf(stderr, "Opening file \"%s\" failed.\n", name);
    }
    for(int i = 0; i < count; i++){
        for(int j = 0; mem[i][j] != '\0'; j++){
            ready_char = toupper(mem[i][j]);

            fprintf(file, "%c", ready_char);
        }
    }
    fclose(file);
}