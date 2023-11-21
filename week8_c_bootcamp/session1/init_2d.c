#include <stdio.h>
// Size of last dimension required i.e 3
void printArray(int a[][3] ){
  for (size_t i = 0; i <= 1; ++i) {
     for (size_t j = 0; j <= 2; ++j) {
        printf("%d ", a[i][j]);
     }
     printf("\n"); // start new line of output 
     }
}

int main() {
  int array1[2][3] = {{1, 2, 3}, {4, 5, 6}};
  printf("Values in array1 by row are:\n");
  printArray(array1);

  // Elements set sequentially, not at specific indexed values
  int array2[2][3] = {1, 2, 3, 4, 5};
  printf("Values in array2 by row are:\n");
  printArray(array2);

  // Elements within {} set out sequentially one after the other, new {} goes on next row
  int array3[2][3] = {{1, 2}, {4}};
  printf("Values in array3 by row are:\n");
  printArray(array3);
  array3[1][2] = 4; // Sets element in last row & column to 4 
  printArray(array3);
  return 0;
}