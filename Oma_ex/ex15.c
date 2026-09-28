#include <stdio.h>
#define MAX_LINE 100
#define MAX_SIZE 40

typedef struct menu_item_ {
    char name[50];
    double price;
} menu_item;

int main(){
    char name[50];
    char line[60];
    char struct_array[MAX_SIZE];
    int count = 0;
    FILE *file;
    printf("Enter file name: ");
    fgets(name, 50, stdin);
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
    while(!feof(file) && count < MAX_SIZE){
        if(fgets(line, MAX_LINE, stdin) != NULL){
            
        }

    }
}