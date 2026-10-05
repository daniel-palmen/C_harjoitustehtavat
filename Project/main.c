#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_len 100

typedef struct course{
    char name[max_len];
    int score;
    int grade;
} course;

int main(){
    char input[max_len];
    char name[max_len];
    char subject[max_len];
    int score;
    int many;
    int count;
    course arr[max_len];
    printf("Welcome to Student Grade Calculator!\n");
    printf("Please enter your name: ");
    fgets(name, max_len, stdin);
    printf("How many subjects do you want to calculate grades for?: ");
    fgets(input, max_len, stdin);
    sscanf(input, "%d", &many);

    for(int i = 0; i < many; i++){
        printf("Enter subject %d name: ", i + 1);
        fgets(subject, max_len, stdin);
        subject[strcspn(subject, "\n")] = '\0';
        printf("Enter grade for %s (0-100): ", subject);
        fgets(input, max_len, stdin);
        sscanf(input, "%d", &score);
        strcpy(arr[i].name, subject);
        arr[i].score = score;
        if(score >= 90){
            arr[i].grade = 5;
        }
        else if(score >= 80){
            arr[i].grade = 4;
        }
        else if(score >= 70){
            arr[i].grade = 3;
        }
        else if(score >= 60){
            arr[i].grade = 2;
        }
        else if(score >= 50){
            arr[i].grade = 1;
        }
        else{
            arr[i].grade = 0;
        }
    }

    for(int i = 0; i < many; i++){
        printf("%s\n", arr[i].name);
        printf("%d\n",arr[i].score);
        printf("%d\n", arr[i].grade);
    }
}