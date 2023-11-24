#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void setArray(int marks[4][5]){
    srand(time(NULL));
    for (int i=0; i<4; i++) {
        for (int j=0; j<5; j++){
            marks[i][j] = rand() % 26;
        }
    }
}

void printArray(int marks[4][5]){
    for (int i=0; i<4; i++){
        for (int j=0; j<5; j++){
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }
}

float average(int marksum[4]){
    for (int i=0; i<4; i++){
        printf("Average For Student %d: ", i+1); 
        float temp = marksum[i]/5.0;
        printf("%3.2f\n", temp);
    }
}

int mksum(int marks[4][5]){
    int sum=0;
    //printf("Sum:%d", sum);
    int marksum[4];
    // Counts Marks For All Tasks For Each Student
    for (int i=0; i<4; i++) {
        for (int j=0; j<5; j++){
            int temp = marks[i][j];
            //printf("Sum: %d Temp:%d\n", sum, temp);
            sum = sum + temp;
            //printf("Sum:%d", sum);
        }
        marksum[i] = sum;
        sum=0;
    }
    // Prints Out Array Containing Sum Of Each Student 
    for (int k = 0; k<4; k++){
        printf("Student %d Mark Sum:", k+1);
        printf("%d\n", marksum[k]);
    }
    average(marksum);
}

int main(){
    int marks[4][5]; // Row = Student, Column = Task
    setArray(marks);
    printArray(marks);
    mksum(marks); // Calculate Sum Of All Students & Mean
}