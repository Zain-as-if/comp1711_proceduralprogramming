//Odd Or Even Checker
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("Number %d is even\n", num);
    }
    else {
        printf("Number %d is odd\n", num);
    }
    return 0;
}