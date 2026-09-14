#include <stdio.h>
#define MAX_LEN 32

typedef struct student_{
    char name[MAX_LEN];
    int group;
    int id;
} student;

int move(student *source, int group, student *target, int size);

int main(){

}

int move(student *source, int group, student *target, int size){
    int j = 0;
    int k = 0;
    int moved = 0;
    while(target[j].id != 0){
        j++;
    }
    for(int i = 0; source[i].id != 0; i++){
        if(source[i].group == group && j < size - 1){
            target[j] = source[i];
            j++;
            moved++;
        }
        else{
            source[k] = source[i];
            k++;
        }
    }
    target[j].id = 0;
    source[k].id = 0;
    return moved;
}