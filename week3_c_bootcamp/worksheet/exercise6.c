#include <stdio.h>
float calc(float num1, float num2, int choice){
    float answer;
    switch (choice){
        case 1: answer = num1+num2; break;
        case 2: answer = num1-num2; break;
        case 3: answer = num1*num2; break;
        case 4: answer = num1/num2; break;
        default: printf("Error");
    }
    return answer;  
}

int main(){
    float num1;
    float num2;
    int choice;
    printf("Enter num1");
    scanf("%f", &num1);
    printf("Enter num2");
    scanf("%f", &num2);
    printf("Option 1: +\nOption 2: -\nOption 3: *\nOption 4: /");
    scanf("%d", &choice);
    printf("The Answer is %f", calc(num1, num2, choice));
    return 0;
}