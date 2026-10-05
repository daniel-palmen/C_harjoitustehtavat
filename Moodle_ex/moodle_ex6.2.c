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

int compare_group(const void *a, const void *b){
    const student *s1 = a;
    const student *s2 = b;

    return s1->group - s2->group;
}

int compare_lastname(const void *a, const void *b)
{
    const student *s1 = a;
    const student *s2 = b;

    const char *last1 = strchr(s1->name, ' ');
    const char *last2 = strchr(s2->name, ' ');

    if (last1 != NULL)
        last1++;
    else
        last1 = s1->name;

    if (last2 != NULL)
        last2++;
    else
        last2 = s2->name;

    return strcmp(last1, last2);
}

int compare_firstname(const void *a, const void *b)
{
    const student *s1 = a;
    const student *s2 = b;

    return strcmp(s1->name, s2->name);
}

void sort_students(student *students, int count, sort_order sb){
    if (count <= 0){
        count = 0;
        while (students[count].id != 0) {
            count++;
        }
    }
    if(sb == byGroup){
        qsort(students, count, sizeof(student), compare_group);
    }
    else if(sb == byLastName){
        qsort(students, count, sizeof(student), compare_lastname);
    }
    else if(sb == byFirstName){
        qsort(students, count, sizeof(student), compare_firstname);
    }
}