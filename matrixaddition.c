#include <stdio.h>

// Function to add two matrices and store the result in a third matrix
void addMatrices(int rows, int columns, int matrix1[rows][columns], int matrix2[rows][columns], int result[rows][columns]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int rows, int columns, int matrix[rows][columns]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, columns;

    // Input matrix dimensions
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    // Declare matrices
    int matrix1[rows][columns], matrix2[rows][columns], result[rows][columns];

    // Input elements of the first matrix
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add matrices
    addMatrices(rows, columns, matrix1, matrix2, result);

    // Display the matrices and their sum
    printf("\nFirst Matrix:\n");
    displayMatrix(rows, columns, matrix1);

    printf("\nSecond Matrix:\n");
    displayMatrix(rows, columns, matrix2);

    printf("\nSum of the Matrices:\n");
    displayMatrix(rows, columns, result);

    return 0;
}
