#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void setArray(int matrix[2][3]){
    srand(time(NULL));
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            matrix[i][j] = rand()%10;
        }
    }
}

void printMatrix(int matrix[2][3]){
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void printTransposed(int matrix[2][3], int transposed[3][2]){
    for (int i=0; i<3; i++){
        for (int j=0; j<2; j++){
            transposed[i][j] = matrix[i][j];
            printf("%d", transposed[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int matrix[2][3] = {1, 2, 3, 4, 5, 6};
    // int matrix[2][3];
    int transposed[3][2];
    // setArray(matrix);
    printf("Array:\n");
    printMatrix(matrix);
    printf("Transposed:\n");
    printTransposed(matrix, transposed);
}