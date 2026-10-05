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

