#include <stdio.h>
#include "utils.h"

int main(){
    char filename[] = "data.txt";
    FILE *file=open_file(filename, "w");

    fclose(file);
    return 0;
}

// TO COMPILE
// gcc -c utils.c : Will produce utils.o
// gcc -c createfileh.c : Will produce createfileh.o
// gcc createfileh.o utils.o -o create_file 

// Compile implementation with flag -c 
// Compile main file with flag -c
// Generate exe by combining object files .o