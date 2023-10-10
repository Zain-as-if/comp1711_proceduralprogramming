#include <stdio.h>
int main() {
    int a = 5;
    int b = 10; 
    int temp;
    printf("Variables are %d and %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("Variables are %d and %d\n", a, b);
    return 0;
}