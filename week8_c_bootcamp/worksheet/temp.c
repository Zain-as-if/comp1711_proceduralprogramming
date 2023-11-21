
#include <stdio.h>

// Function to print a 2D array
void printMatrix(int matrix[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to transpose a 2D array
void transposeMatrix(int original[][3], int transposed[][2], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = original[i][j];
        }
    }
}

int main() {
    // Initialize a 2x3 matrix
    int originalMatrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Print the original matrix
    printf("Original Matrix:\n");
    printMatrix(originalMatrix, 2, 3);

    // Transpose the matrix
    int transposedMatrix[3][2];
    transposeMatrix(originalMatrix, transposedMatrix, 2, 3);

    // Print the transposed matrix
    printf("\nTransposed Matrix:\n");
    printMatrix(transposedMatrix, 3, 2);

    return 0;
}
