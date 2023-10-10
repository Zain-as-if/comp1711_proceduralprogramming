#include <stdio.h>
#include <math.h>
int main() {
    float initial;
    float rate; 
    float time;
    printf("Enter your inital loan:");
    scanf("%f", &initial);
    printf("Enter your interest rate per month:");
    scanf("%f", &rate);
    printf("Enter the time elapsed in months:");
    scanf("%f", &time);
    float money = (initial * (pow(rate+1, time)));
    printf("Your interest results in total of:%f", money);
    return 0;
}