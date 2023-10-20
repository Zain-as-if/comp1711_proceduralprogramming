#include <stdio.h>
//Help Required
int isPrime(int num){
    int temp=0;
    int i;
    for(i=2; i<=num/2;i++){
        if(num%i==0){ //Checks if num is divisible by any number
            temp++;   //If number is divisible by a number, increments temp, if temp !=0 numer is not a prime
            break;
        }
    }
    return temp;
}

int main(){
    int num; 
    printf("Enter A Number");
    scanf("%d", &num);
    if (isPrime(num)==0 && num!=1){
        printf("%d is a Prime Number", num);
    }
    else{
        printf("%d is not a Prime Number", num);
    }
    return 0;
}