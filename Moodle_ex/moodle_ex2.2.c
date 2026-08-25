#include <stdio.h>

void sort3(int *pa[3]);

int main(){
    int a = 12;
    int b = 4;
    int c = -1;

    int *pa[3] = {&a, &b, &c};

    sort3(pa);

    printf("Sorted: %d, %d, %d\n", *pa[0], *pa[1], *pa[2]);
    printf("Original values: %d, %d, %d\n", a, b, c);
}

void sort3(int *pa[3]){
    int *temp;
    for(int i=0;i < 2;i++){
        for(int j=0; j< 2-i;j++){
            if(*pa[j] > *pa[j + 1]){
                temp = pa[j + 1];
                pa[j + 1] = pa[j];
                pa[j] = temp;
            }
        }
    }
}