#include <stdio.h>
#include "utils.h"
//Writing to file: Write a programme that creates the file squares.dat 
//and writes to it the squares of the positive integers from 1 to n
//where n is providedas input by the user.
int main(){
    char filename[]="squares.dat";
    FILE *file = fopen(filename, "w");
    int number;
    printf("Enter Number");
    scanf("%d", &number);
    for (int i=1; i<=number;i++){
        fprintf(file, "%d\n", i*i);
    }
    fclose(file);
    return 0;
}