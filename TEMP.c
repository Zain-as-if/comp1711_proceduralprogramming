#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define an appropriate struct
typedef struct {
	char date[11];
	char time[6];
	int steps;
} FITNESS_DATA;

// Define any additional variables here



// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);
}

// Complete the main function
int main() {
    // Reads FitnessData CSV File
    char filename[]="FitnessData_2023.csv";
    FILE *file = fopen(filename, "r");
    if (file ==NULL){
        perror("Error");        
        return 1;
    }
    

    int count = 0;
    char line[100];
    FITNESS_DATA records[3];


    while (fgets(line, sizeof(line), file) != NULL){
        
        FITNESS_DATA record;
        if (sscanf(line, "%10[^,],%5[^,],%d", record.date, record.time, &record.steps)) {
            // Processed line successfully
            records[count] = record;
            count++;
            if (count <= 3){
                printf("%s/%s/%d\n", record.date, record.time, record.steps);
            }
        }
    }
    fclose(file);
    printf("Number Of Records In File: %d\n", count);
    return 0;
}