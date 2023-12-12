#include <stdio.h>
int main(){
    int var = 10;
    int* var_address=&var;
    printf("\n");
    printf("Content of \\ var\\  = %d\n", var);
    printf("Content of \\ var_address\\  = %p\n", var_address);
    printf("Content of \\ *var_address\\  = %d\n", *var_address);
    printf("\n");
}