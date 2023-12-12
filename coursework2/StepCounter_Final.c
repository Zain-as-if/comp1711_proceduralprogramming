#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "FitnessDataStruct.h"

// Struct moved to header file

// Define any additional variables here
// Global variables for filename and FITNESS_DATA array

char mostdate[11];
char mosttime[6];
char leastdate[11];
char leasttime[6];

char startdate[11];
char starttime[6];
char enddate[11];
char endtime[6];

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
int main() 
{
    char choice;
    int count = 0; // Count for lines
    char line[100]; // Array That Stores Lines Of CSV File
    
    int leaststeps = 100000;

    int moststeps = 0;
    float totalstep = 0;
    
    int start = -1;
    int end = -1;

    while (choice != 'Q')
    {
        // Displays Menu
        printf("\nMenu\n");
        printf("A: Specify the filename to be imported\n");
        printf("B: Disp&lay the total number of records in the file\n");
        printf("C: Find the date and time of the timeslot with the fewest steps\n");
        printf("D: Find the data and time of the timeslot with the largest number of steps\n");
        printf("E: Find the mean step count of all the records in the file\n");
        printf("F: Find the longest continuous period where the step count is above 500 steps\n");
        printf("Q: Exit\n \n");
        printf("Enter your choice: ");
        scanf("%c", &choice); 
        
        switch (choice) {

            case 'A': 
            {   // Specify Filename to be imported
                char filename[50];
                printf("Enter Filename: ");
                scanf("%s", filename);
                FILE *file = fopen(filename, "r");
                if (file == NULL)
                {
                    perror("Error");
                    return 1;
                }
                // Reads all lines from csv file
                while (fgets(line, sizeof(line), file) != NULL)
                { 
                    FITNESS_DATA record;
                    tokeniseRecord(line, ",", record.date, record.time, record.steps);
                    count++; // Counts number of lines in CSV file
                    
                    int currentstep = atoi(record.steps);

                    // For Case E
                    totalstep = totalstep + currentstep;

                    // For Case C and D, Finds most & least steps 
                    if (currentstep > moststeps)
                    {
                        moststeps = currentstep;
                        strcpy(mosttime, record.time); // Copies data in record.time to mosttime variable 
                        strcpy(mostdate, record.date);
                    }
                    if (currentstep < leaststeps)
                    {
                        leaststeps = currentstep;
                        strcpy(leasttime, record.time);
                        strcpy(leastdate, record.date);
                    } 
                }
                fclose(file);
                break;
            }

            case 'B':
            {
                printf("Number of records in the file: %d\n", count);
                break;
            }

            case 'C':
            {
                printf("Fewest Steps: %s/%s\n", leastdate, leasttime);
                break;
            }

            case 'D':
            {
                printf("Most Steps: %s/%s\n", mostdate, mosttime);
                break;
            }

            case 'E':
            {
                float meanstep = totalstep/count;
                int result = round(meanstep);
                printf("Mean step count: %d", result);
                break;
            }

            case 'F':
            {
                // Couldn't Figure Out
                break;
            }

            case 'Q':
            {
                printf("Exiting Program. \n");
                break;
            }

            default: 
            {
                printf("\nInvalid Choice. Try Again.\n");
                break;
            }
        }
    }
    return 0;
}









