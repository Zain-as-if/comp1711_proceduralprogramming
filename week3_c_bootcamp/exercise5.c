#include <stdio.h>
#Help Needed?

int main(){
    char str1[100];
    char str2[100];
    printf("Enter 1st String");
    scanf("%s", str1);
    printf("Enter 2nd String");
    scanf("%s", str2);
    printf("The concatenated string is %s", concatStrings(str1, str2));
    return 0;
}