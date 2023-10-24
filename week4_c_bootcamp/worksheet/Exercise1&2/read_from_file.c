#include <stdio.h>
#include "utils.h"
#include <stdlib.h>

int main(){
    char filename[]="squares.dat";
    FILE *file = fopen(filename, "r");
    float average=0;
    char line;
    int numberlines=0;
    int buffer_size = 100;
    char line_buffer[buffer_size];
    while (fgets(line_buffer, buffer_size, file) != NULL){
        printf("%s", line_buffer);  //line_buffer stores values in each line
        if (line = '\n'){
            numberlines++;
        }
        average = average + atof(line_buffer);
    }
    printf("Number of lines %d\n", numberlines);
    printf("Average is %f\n", average/numberlines);
    fclose(file);
    return 0;
}