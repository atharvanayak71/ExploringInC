// Atharva Nayak
// 0905CS241063
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of matrix: ");
    scanf("%d", &n);
    int mat[10][10];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    int diagSum = 0, antiDiagSum = 0;
    for (int i = 0; i < n; i++) {
        diagSum += mat[i][i];
        antiDiagSum += mat[i][n - 1 - i];
    }
    printf("Main diagonal sum: %d\n", diagSum);
    printf("Anti diagonal sum: %d\n", antiDiagSum);
    return 0;
}
