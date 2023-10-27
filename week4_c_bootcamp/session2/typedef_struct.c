#include <stdio.h>

typedef struct {
    char name [20];
    char student_id [11]; 
    unsigned mark;
} student;

int main(){
    int number_of_students = 2, i;
    student students [] = {{"Zain Asif", "123456789", 42}, {"Asif Zain", "987654321", 97}}; // Initialisation
    for (i=0; i<number_of_students; i++){
        printf("--------\n");
        printf("Student Name: %s\n", students[i].name);
        printf("Student ID: %s\n", students[i].student_id);
        printf("Final Mark: %u\n", students[i].mark);
    }
    printf("--------\n");
    return 0;
}