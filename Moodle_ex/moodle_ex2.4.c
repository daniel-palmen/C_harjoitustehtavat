#include <stdio.h>

void fill_matrix(int matrix[5][3]);

int main(){
    int matrix[5][3];
    fill_matrix(matrix);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            printf ("%d\t", matrix[i][j]);
        }
    printf ("\n");
    }
}

void fill_matrix(int matrix[5][3]){
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            if(j == 0){
                matrix[i][j] = i + 1;
            }
            if(j == 1){
                matrix[i][j] = i + 6;
            }
            if(j == 2){
                matrix[i][j] = i + 11;
            }
        }
    }

}