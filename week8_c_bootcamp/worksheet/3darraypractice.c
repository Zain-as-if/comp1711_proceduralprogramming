#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void setArray(int marks[2][3][4]){
    srand(time(NULL));
    for (int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<4; k++){
                marks[i][j][k] = rand() % 31 + 70;
            }
        }
    }
}

int main(){
    int marks[2][3][4]; // 2 Semesters , 3 Students, 4 Modules
    setArray(marks);
}