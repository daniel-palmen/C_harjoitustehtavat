#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"

int main(){
    char input[max_len];
    char name[max_len];
    char subject[max_len];
    int score;
    int many;
    course arr[max_len];
    char file_name[] = "project_test.txt";
    printf("Welcome to Student Grade Calculator!\n");
    printf("Please enter your name: ");
    fgets(name, max_len, stdin);
    printf("How many subjects do you want to calculate grades for?: ");
    fgets(input, max_len, stdin);
    sscanf(input, "%d", &many);

    for(int i = 0; i < many; i++){
        printf("\n");
        printf("Enter subject %d name: ", i + 1);
        fgets(subject, max_len, stdin);
        subject[strcspn(subject, "\n")] = '\0';
        printf("Enter grade for %s (0-100): ", subject);
        fgets(input, max_len, stdin);
        sscanf(input, "%d", &score);
        strcpy(arr[i].name, subject);
        arr[i].score = score;
        arr[i].grade = make_grade(score);
    }
    write_file(name, arr, file_name, many);
    read_file(file_name);
}