//Adding Calculator
#include <stdio.h>
int main() {
    int num1;
    int num2;
    int calc;
    printf("Enter First Number:");
    scanf("%d", &num1);
    printf("Enter Second Number:");
    scanf("%d", &num2);
    calc = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, calc);
    return 0;
}