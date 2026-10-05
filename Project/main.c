#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"

int main(){
    char input[MAX_LEN];
    char name[MAX_LEN];
    char subject[MAX_LEN];
    int score;
    int many;
    course arr[MAX_LEN];
    int checker = 0;
    char file_name[] = "project_test.txt";

    printf("Welcome to Student Grade Calculator!\n");
    while(checker == 0){
        printf("Please enter your name: ");
        fgets(name, MAX_LEN, stdin);
        if(name[0] != '\n'){
            checker = 1;
        }
        else{
            printf("Name cannot be empty.\n");
        }
    }
    checker = 0;
    printf("How many subjects do you want to calculate grades for?: ");
    fgets(input, MAX_LEN, stdin);
    sscanf(input, "%d", &many);

    for(int i = 0; i < many; i++){
        printf("\n");
        printf("Enter subject %d name: ", i + 1);
        fgets(subject, MAX_LEN, stdin);
        subject[strcspn(subject, "\n")] = '\0';
        printf("Enter grade for %s (0-100): ", subject);
        fgets(input, MAX_LEN, stdin);
        sscanf(input, "%d", &score);
        strcpy(arr[i].name, subject);
        arr[i].score = score;
        arr[i].grade = make_grade(score);
    }
    write_file(name, arr, file_name, many);
    read_file(file_name);
}