#include <stdio.h>

#define MAX_LEN 32
typedef struct student_{
    char name[MAX_LEN];
    int group;
    int id;
    struct student_ *next;
} student; 

int move(student **source, int group, student **target);

int main(){

}

int move(student **source, int group, student **target){
    student *current = *source;
    student *previous = NULL;
    int count = 0;
    while(current != NULL){
        if(current->group == group){
            student *next = current->next;
            if(previous == NULL){
                *source = next;
            }
            else{
                previous->next = next;
            }
            current->next = *target;
            *target = current;
            count++;
            current = next;
        }
        else{
            previous = current;
            current = current->next;
        }
    }
    return count;
}