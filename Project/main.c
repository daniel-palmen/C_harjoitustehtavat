#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_len 100

typedef struct course{
    char name[max_len];
    int score;
    int grade;
} course;

void write_file(char *name, course *arr, char *file_name, int many);
void read_file(char *file_name);

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
    write_file(name, arr, file_name, many);
    read_file(file_name);
}

void write_file(char *name, course *arr, char *file_name, int many){
    float sum;
    float average;
    int i;
    FILE *file = fopen(file_name, "w");
    fprintf(file, "Student: %s\n", name);
    fprintf(file, "Subject score grade\n");
    for(i = 0; i < many; i++){
        fprintf(file, "%s %d %d\n", arr[i].name, arr[i].score, arr[i].grade);
        sum = sum + arr[i].grade;
    }
    average = sum / i;
    fprintf(file, "Average grade: %.2f", average);
    fclose(file);
}

void read_file(char *file_name){
    char line[max_len];
    FILE *file = fopen(file_name, "r");
    printf("\n");
    while (fgets(line, sizeof(line), file) != NULL){
        printf("%s", line);
    }
    fclose(file);
}