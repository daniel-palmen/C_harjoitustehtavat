#include <stdio.h>
#define max_len 100

int main(){
    char input[max_len];
    char name[max_len];
    int many;
    int count;
    printf("Welcome to Student Grade Calculator!\n");
    printf("Please enter your name: ");
    fgets(name, max_len, stdin);
    printf("How many subjects do you want to calculate grades for?: ");
    fgets(input, max_len, stdin);
    sscanf(input, "%d", &many);
    for(int i = 0; i < many; i++){
        printf("Enter subject %d name: ", i);
        
    }

}