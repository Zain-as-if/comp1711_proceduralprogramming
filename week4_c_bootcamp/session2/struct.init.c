#include <stdio.h>

struct student {
    char name [20];
    char student_id [11]; // Assuming Up To 10 Digits
    unsigned mark;
};

int main(){
    struct student new_student = {"Asif", "28932123", 35};
    printf("Student Name: %s\n", new_student.name);
    printf("Student ID %s\n", new_student.student_id);
    printf("Final Mark: %u\n", new_student.mark);   
    return 0;
}

// Can Use:
// struct student new_student = {.name = "Asif", 
//                               .student_id = "28932123",
//                               .mark = 35};
// Designators Used To Initialise Individual Fields