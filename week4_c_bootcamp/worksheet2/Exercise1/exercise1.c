// Write a programme that declares an array of 10 2D points
// (i.e., with two coordinates 𝑥 and 𝑦), initialises it, 
// and then prints the coordinates of each individual point to screen. 
// You should use a struct called point tostore the two coordinates 
// of each point as double values, and you should usethe typedef 
// keyword to make the data type point available in your programme.
// You can choose how to initialise the values of the pointers: 
// for example, you can use the index of the point in the array, 
// ask the user to supply the two values,or generate values randomly 
// with rand(). The output should have the format(<x coordinate>, 
// <y coordinate>), where the two coordinates are printed with 
// 2 decimal digits of accuracy.
#include <stdio.h>

typedef struct {
    float x;
    float y; 
} point;

int main(){
    float x;
    float y;
    int a=0;
    int number_of_coords = 10, i;
    for (i=0; i<number_of_coords; i++){
        printf("%d. Enter X coordinate to 2 dp", i);
        scanf("%f", &x);     
        printf("%d. Enter Y coordinate to 2 dp", i);
        scanf("%f", &y);    
        point coords [] = {{x,y}};
        printf("%f,%f\n", coords[i].x, coords[i].y);
    }
    return 0;
}