#include <stdio.h>
//Help Required
char str_len(char *p){ //*p stores the address of the character variable inputted
    int length=0; //Counter
    while (*p != '\0'){ //End of array of strings ends in "\0", ends before that so "\0" not counter 
        length++;
        p++; //Pointer index that = letter
    }
    return length;
}

int main(){
    char string[100];
    int length;
    printf("Enter A String");
    scanf("%s", string);
    printf("The length of your string is %d", str_len(string));
    return 0;
}