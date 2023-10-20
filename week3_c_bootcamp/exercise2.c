#include <stdio.h>
float volsphere(float radius){
    float volume;
    volume= ((((((radius)*radius)*radius)*3.141)*4)/3);
    return volume;
}

int main(){
    float radius; 
    printf("Enter the volume of the sphere");
    scanf("%f", &radius);
    printf("The volume of the sphere is %f", volsphere(radius));
    return 0;
}