#include <stdio.h>
#define max_len 100

typedef struct course{
    char name[max_len];
    int grade;
} course;

int main(){
    char input[max_len];
    char name[max_len];
    char subject[max_len];
    int grade;
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
        fgets(subject, max_len, stdin);
        printf("Enter grade for %s (0-100): ", subject);
        fgets(input, max_len, stdin);
        sscanf(input, "%d", &grade);
    }
}