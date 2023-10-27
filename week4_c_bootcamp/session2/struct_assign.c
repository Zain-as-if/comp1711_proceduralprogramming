#include <stdio.h>
#include <string.h>

struct student{
    char name[20];
    char student_id[11];
    unsigned mark;
};

int main(){
    int mark;
    printf("Enter Your Final Mark");
    scanf("%d", &mark);
    struct student new_student = {.mark=mark};
    strcpy(new_student.name, "Asif");
    strcpy(new_student.student_id, "13902178");
    printf("Student Name: %s\n", new_student.name);
    printf("Student ID: %s\n", new_student.student_id);
    printf("Final Mark: %u\n", new_student.mark);
    return 0;
}