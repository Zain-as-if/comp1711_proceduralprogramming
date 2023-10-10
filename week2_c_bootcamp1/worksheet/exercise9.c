#include <stdio.h>
int main() {
    int light = 25902068.3712; //metres per second
    int time;
    printf("Enter the time travelled in days:");
    scanf("%d", &time);
    float distance = (time * light * 1000);
    printf("Distance travelled:%f kilometres\n", distance);
    return 0;
}