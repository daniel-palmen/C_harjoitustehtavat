#include <stdio.h>
#include <stdlib.h>
#define MAX_LINE 100
#define MAX_SIZE 40

typedef struct menu_item_ {
    char name[50];
    double price;
} menu_item;

int comp_price(const void *a, const void *b);
int comp_name(const void *a, const void *b);

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
                qsort(arr, count, sizeof(arr[0]), comp_price);
            }
            else if(choice == 2){
                qsort(arr, count, sizeof(arr[0]), comp_name);
            }

        }
        else{
            printf("Incorrect input.\n");
        }
    }
    for (int i = 0; i < count; i++) {
        printf("%8.2f; %s\n", arr[i].price, arr[i].name);
    }
}

int comp_price(const void *a, const void *b){
    const menu_item *x = a;
    const menu_item *y = b;
    if(x->price < y->price){
        return -1;
    }
    if(x->price > y->price){
        return 1;
    }
    return 0;
}

int comp_name(const void *a, const void *b){

}