#include <stdio.h>
int main() {
    float radius;
    printf("Enter Radius Of Circle:");
    scanf("%f", &radius);
    float area;
    area = 3.141*(radius*radius);
    printf("The area of the circle with radius:%f is %f", radius, area);
    return 0;
}