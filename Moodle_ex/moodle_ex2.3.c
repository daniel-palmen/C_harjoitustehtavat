#include <stdio.h>

void sort3(int *a, int *b, int *c);

int main(){
int a = 37;
int b = 12;
int c = 10;      

sort3(&a, &b, &c);  
printf("%d, %d, %d", a, b, c);
}

void sort3(int *a, int *b, int *c){
    int temp;
    if(*a > *b){
        temp = *b;
        *b = *a;
        *a = temp;
    }
    if(*a > *c){
        temp = *c;
        *c = *a;
        *a = temp;
    }
    if(*b > *c){
        temp = *c;
        *c = *b;
        *b = temp;
    }
}