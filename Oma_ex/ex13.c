#include <stdio.h>

main(){
    char name[100];
    FILE *file;
    printf("Enter file name: ");
    fgets(name, 100, stdin);
    file = fopen(name, "r");
    if(file == NULL){
        //error message
    }
    else{
        
    }

}