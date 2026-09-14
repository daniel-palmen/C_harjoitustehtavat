#include <stdio.h>

int count_chars(const char *characters, FILE *file);

int count_chars(const char *characters, FILE *file){
    int counter = 0;
    int end = 0;
    char line[100];
    while(end == 0){
        fgets(line, 100, file);
        for(int i = 0; line[i] != '\n' && line[i] != '\0'; i++){
            for(int j = 0; characters[j] != '\0'; j++){
                if(characters[j] == line[i]){
                    counter++;
                }
            }
        }
        end = feof(file);
    }
    return counter;
}