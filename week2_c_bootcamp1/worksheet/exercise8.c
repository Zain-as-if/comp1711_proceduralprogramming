#include <stdio.h>
int main() {
    int num;
    int fin=1;
    int i;
    printf("Enter number:");
    scanf("%d", &num);
    for (i=1;i<=num;i++) {
        fin = fin*i;
    }
    printf("%d! =%d\n", num, fin);
    return 0;
}