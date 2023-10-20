#include <stdio.h>
float circleArea(float radius){
    float area = ((radius*radius)*3.141);
    return area;
}

int main(){
    float radius;
    printf("Enter the radius of the circle");
    scanf("%f", &radius);
    printf("The area of the circle with radius %f is %f", radius, circleArea(radius));
    return 0;
}