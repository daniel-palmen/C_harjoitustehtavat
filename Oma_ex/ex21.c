#include <stdio.h>
#include <string.h>
#define MAX 100

int main(){
    char file_name[MAX];
    FILE *file;
    char line[MAX];
    unsigned char calculated;
    int picked;
    char *prefix;

    printf("Anna tiedoston nimi: ");
    fgets(file_name, MAX, stdin);
    for(int i = 0; file_name[i] != '\0'; i++){
        if(file_name[i] == '\n'){
            file_name[i] = '\0';
        }
    }
    file = fopen(file_name, "r");

    while(!feof(file)){
        if(fgets(line, MAX, file)!= NULL){
            char *star = strchr(line, '*');
            if(line[0]=='$' && strchr(line, '*') != NULL){
                for(int i = 0; line[i] != '*'; i++){
                    calculated ^= (unsigned char)line[i];
                }
            }
            sscanf(star + 1, "%2x", &picked);
            if(picked == calculated){
                prefix = "[OK]";
            }
            else{
                prefix = "[Fail]";
            }
            printf("%s%s", prefix, line);

        }
    }

    fclose(file);
}