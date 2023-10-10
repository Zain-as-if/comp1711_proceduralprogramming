//(32°F − 32) × 5/9 = 0°C)
#include <stdio.h>
int main() {
    float fahr;
    printf("Enter Temperature In Fahrenheit:");
    scanf("%f", &fahr);
    float cel;
    cel = (((fahr - 32) * 5) /9);
    printf("%f is %f degrees celsius\n", fahr, cel);
    return 0;
}