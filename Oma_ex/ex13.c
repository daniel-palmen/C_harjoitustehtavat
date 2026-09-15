#include <stdio.h>
#define LINE_SIZE 80

int main(){
    char name[LINE_SIZE];
    char line[LINE_SIZE];
    int number = 0;
    int largest = 0;
    int smallest = 0;
    int count = 0;
    int first_line = 0;
    FILE *file;
    printf("Enter file name: ");
    fgets(name, LINE_SIZE, stdin);
    for(int i = 0; name[i] != '\0'; i++){
        if(name[i] == '\n'){
            name[i] = '\0';
        }
    }
    file = fopen(name, "r");
    if(file == NULL){
        //error message
        fprintf(stderr, "Opening file failed.\n");
    }
    else{
        while(!feof(file)){
            if(fgets(line, LINE_SIZE, file) != NULL){
                if(sscanf(line, "%d", &number) == 1){
                    if(first_line == 0){
                        largest = number;
                        smallest = number;
                        first_line = 1;
                    }
                    if(number > largest){
                        largest = number;
                    }
                    if(number < smallest){
                        smallest = number;
                    }
                    count++;

                }
            }

        }
        fclose(file);
        printf("Count of numbers: %d\n", count);
        printf("Smallest number: %d\n", smallest);
        printf("Largest number: %d\n", largest);
    }
}