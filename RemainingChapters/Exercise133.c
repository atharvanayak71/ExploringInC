// Atharva Nayak
// 0905CS241063
#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
        matrix[i] = (int *)malloc(cols * sizeof(int));
    printf("Enter %dx%d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) printf("%4d", matrix[i][j]);
        printf("\n");
    }
    for (int i = 0; i < rows; i++) free(matrix[i]);
    free(matrix);
    return 0;
}
