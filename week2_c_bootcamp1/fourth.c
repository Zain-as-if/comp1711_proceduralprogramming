#include <stdio.h>
int main() {
    char name[15];  //Sets variable with character limit 15
    printf("Hello, Enter Your Name");
    scanf("%s", name);       //Input Command
    printf("Your name is %s\n", name);  
    return 0; 
}