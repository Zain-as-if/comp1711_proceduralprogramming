#include <stdio.h>
float ftoc(float fahr){
    float cel;
    cel = (((fahr-32)*5)/9);
    return cel;
}

float fton(float fahr){
    float newt;
    newt = (((fahr-32)*11)/60);
    return newt;
}

float ftok (float fahr){
    float kelv;
    kelv = ((((fahr-32)*5)/9) + 273.15);
    return kelv;
}

int main(){
    float fahr;
    float cel;
    float newt;
    printf("Enter the degrees in fahrenheit");
    scanf("%f", &fahr);
    int choice; 
    printf("Option 1: Convert Fahrenheit To Celsius\nOption 2: Convert Fahrenheit To Newton Temperature Scale\nOption 3: Convert Fahrenheit To Kelvin");
    scanf("%d", &choice);
    switch(choice){
        case 1: printf("%f Fahrenheit is %f Celsius", fahr, ftoc(fahr));
        break;
        case 2: printf("%f Fahrenheit is %f Newton Degrees", fahr, fton(fahr));
        break;
        case 3: printf("%f Fahrenheit is %f Kelvin", fahr, ftok(fahr));
        break;
        default: printf("Error"); 
    }
    return 0;
}