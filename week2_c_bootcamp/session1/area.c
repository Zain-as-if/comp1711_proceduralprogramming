#include <stdio.h>
int main() {
    float width;
    float length;
    float area;
    printf("Enter Width Of Rectangle:");
    scanf("%f", &width);
    printf("Enter Lenght Of Rectangle:");
    scanf("%f", &length);
    area = width * length;
    printf("Area Of Rectangle With Width:%f And Sides:%f Is %f\n", width, length, area);
    return 0;
}