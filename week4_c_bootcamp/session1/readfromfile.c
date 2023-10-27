#include <stdio.h>
int main(){
    char filename[]="data.txt";
    FILE *file = fopen(filename, "r");
    if (file ==NULL){
        perror("");
        return 1;
    }
    int buffer_size = 100;
    char line_buffer[buffer_size]; // Array called line_buffer with size buffer_size
    while (fgets(line_buffer, buffer_size, file) != NULL){ // fgets reads file line by line to buffer
        printf("%s", line_buffer); // If buffer too small, only beginning line will be read
    } // Buffer should be one extra character longer than longest line
    fclose(file);
    return 0;
}