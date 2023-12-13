#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the struct for the fitness data
typedef struct {
    char date[11];
    char time[6];
    int steps;
} FitnessData;

// Function to tokenize a record
void tokeniseRecord(char *record, char delimiter, char *date, char *time, int *steps) {
    char *ptr = strtok(record, &delimiter);
    if (ptr != NULL) {
        strcpy(date, ptr);
        ptr = strtok(NULL, &delimiter);
        if (ptr != NULL) {
            strcpy(time, ptr);
            ptr = strtok(NULL, &delimiter);
            if (ptr != NULL) {
                *steps = atoi(ptr);
            }
        }
    }
}

int sort(const void *a, const void *b) {
    return ((FitnessData*)b)->steps - ((FitnessData*)a)->steps;
}

int main()
{
    char filename[100];
    char line[100];

    // Step 1
    printf("Enter Filename: ");
    scanf("%s", filename);
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error, could not find file\n");
        return 1;
    }
    //Step 2
    FitnessData record[1000];
    int count = 0;

    while (fgets(line, sizeof(line), file) != NULL)
    {
        char date[11], time[6];
        int steps;
        tokeniseRecord(line, ',', date, time, &steps);
        strcpy(record[count].date, date);
        strcpy(record[count].time, time);
        record[count].steps = steps;
        count++;
    }
    fclose(file);

    qsort(record, count, sizeof(FitnessData), sort);
    for (int i = 0; i < count; i++)
    {
        printf("Line %d: %s/%s/%d\n", i+1, record[i].date, record[i].time, record[i].steps);
    }
}
