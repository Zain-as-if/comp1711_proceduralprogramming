// Define 2 Arrays dimensions [3][4] and assign random values 0-10 
// Multiply Arrays elemntwise and put result in 3rd array
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void setArrays(int a[3][4]){
    for (int i=0; i<3; i++){
        for (int j=0; j<4; j++){
            a[i][j] = rand()%10;
        }
    }
}

void multiplyArray(int a[3][4], int b[3][4], int c[3][4]){
    for (int i=0; i<3; i++){
        for (int j=0; j<4; j++){
            c[i][j] = a[i][j]*b[i][j];
        }
    }
}

void printArray(int a[3][4]){
    for (int i=0; i<3;i++){
        for (int j=0; j<4; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    srand(time(NULL));
    int a[3][4];
    int b[3][4];
    int c[3][4];

    setArrays(a);
    setArrays(b);
    
    printf("Array A:\n");
    printArray(a);

    printf("Array B:\n");
    printArray(b);

    multiplyArray(a, b, c);
    printf("Array A & B Multiplied Elementwise = C:\n");
    printArray(c);

    return 0;
}