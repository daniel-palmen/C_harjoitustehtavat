#include <stdio.h>
#define MAX_LEN 32
typedef struct student_{
    char name[MAX_LEN];
    int group;
    int id;
} student;
typedef enum{
    byGroup,
    byLastName,
    byFirstName
} sort_order;

void sort_students(student *students, int count, sort_order sb);

int main(){

}

void sort_students(student *students, int count, sort_order sb){
    if (count <= 0){
        count = 0;
        while (students[count].id != 0) {
            count++;
        }
    }
}