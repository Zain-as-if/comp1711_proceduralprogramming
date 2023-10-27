#include <stdio.h>
#include "utils.h"

int main(){
    char filename[]="data.txt"; // "w" in fopen writes/creates a file
    FILE *file = fopen(filename, "w"); // Opening a file (fopen) produces FILE pointer
    
    int number, num_lines =10;
    printf("Type %d numbers: ", num_lines);
    for (int i=0; i<num_lines;i++){
        scanf("%d", &number);
        fprintf(file, "%d\n", number); // Writes to file, file equivalent to printf
    }
    fclose(file);
    return 0;
}