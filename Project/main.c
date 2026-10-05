#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "lib.h"

int main(){
    char input[MAX_LEN];
    char name[MAX_LEN];
    char subject[MAX_SUBJECT];
    int score;
    int many;
    course arr[MAX_LEN];
    bool checker = 0;
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

    while(checker == 0){
        printf("How many subjects do you want to calculate grades for?: ");
        fgets(input, MAX_LEN, stdin);
        if(sscanf(input, "%d", &many) != 1){
            printf("Enter a number.\n");
        }
        else if(many > MAX_LEN){
            printf("Too many courses (100 maximum).\n");
        }
        else if(many <= 0){
            printf("Enter value 1 - 100\n");
        }
        else{
            checker = 1;
        }
    }
    checker = 0;

    for(int i = 0; i < many; i++){
        printf("\n");
        while(checker == 0){
            printf("Enter subject %d name: ", i + 1);
            fgets(subject, MAX_SUBJECT, stdin);
            if(subject[0] == '\n'){
                printf("Subject cannot be empty.\n");
            }
            //if subject < MAX_SUBJECT then ends in \n
            else if(strchr(subject, '\n') != NULL){
                checker = 1;
            }
            else{
                printf("Subject name too long (max %d characters)\n", MAX_SUBJECT - 1);
                //empties stdin
                int c;
                while ((c = getchar()) != '\n' && c != EOF);
            }
        }
        checker = 0;
        subject[strcspn(subject, "\n")] = '\0';
        while(checker == 0){
            printf("Enter grade for %s (0-100): ", subject);
            fgets(input, MAX_LEN, stdin);
            if(sscanf(input, "%d", &score) != 1){
                printf("Enter a valid number (0-100)\n");
            }
            else if(score < 0){
                printf("Grade cannot be negative.\n");
            }
            else if(score > 100){
                printf("Grade cannot be larger than 100.\n");
            }
            else{
                checker = 1;
            }
        }
        checker = 0;
        strcpy(arr[i].name, subject);
        arr[i].score = score;
        arr[i].grade = make_grade(score);
    }
    write_file(name, arr, file_name, many);
    read_file(file_name);
}