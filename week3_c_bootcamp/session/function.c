#include <stdio.h>

int sum(int a,int b){  //States a function called sum which takes 2 integer values a and b in order
    int answer;  
    answer = a + b;
    return answer; //Returns variable answer to main function
}

int main(){
    int y = 2;
    int z = sum(5,y); //Function Sum is called and passes 2 values into sum 

    printf("The sum of 5 and %d is %d\n", y, z);
}