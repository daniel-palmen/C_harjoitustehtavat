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
    char input[30];
    int choice = 0;
    menu_item arr[MAX_SIZE];
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
        return 0;
    }
    while(!feof(file) && count < MAX_SIZE){
        if(fgets(line, MAX_LINE, file) != NULL){
            if(sscanf(line, " %49[^;]; %lf", arr[count].name, &arr[count].price) == 2){
                count++;
            }
        }
    }
    fclose(file);
    while(choice == 0){
        printf("Sort by\n1)Price\n2)Name\nChoose:");
        fgets(input, 30, stdin);
        if(sscanf(input, "%d", &choice) == 1){
            if(choice == 1){

            }
            else if(choice == 2){

            }

        }
        else{
            printf("Incorrect input.\n");
        }
}