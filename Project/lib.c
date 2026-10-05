#include <stdio.h>
#include "lib.h"

void write_file(char *name, course *arr, char *file_name, int many){
    float sum;
    float average;
    int i;
    FILE *file = fopen(file_name, "w");
    fprintf(file, "Student: %s\n", name);
    fprintf(file, "%-21s %8s %8s\n","Subject", "score", "grade");
    for(i = 0; i < many; i++){
        fprintf(file, "%-20s %8d %8d\n", arr[i].name, arr[i].score, arr[i].grade);
        sum = sum + arr[i].grade;
    }
    fprintf(file, "\n");
    average = sum / i;
    fprintf(file, "Average grade: %.2f", average);
    fclose(file);
}

void read_file(char *file_name){
    char line[MAX_LEN];
    FILE *file = fopen(file_name, "r");
    printf("\n");
    while (fgets(line, sizeof(line), file) != NULL){
        printf("%s", line);
    }
    fclose(file);
}

int make_grade(int score){
    if(score >= 90){
        return 5;
    }
    else if(score >= 80){
        return 4;
    }
    else if(score >= 70){
        return 3;
    }
    else if(score >= 60){
        return 2;
    }
    else if(score >= 50){
        return 1;
    }
    return 0;
}