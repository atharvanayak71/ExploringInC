// Atharva Nayak
// 0905CS241063
#include <stdio.h>

void printMatrix(int mat[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) printf("%3d ", mat[i][j]);
        printf("\n");
    }
}

int main() {
    int n = 4;
    int mat[10][10] = {0};
    int num = 1, top = 0, bottom = n - 1, left = 0, right = n - 1;
    while (num <= n * n) {
        for (int i = left; i <= right; i++) mat[top][i] = num++;
        top++;
        for (int i = top; i <= bottom; i++) mat[i][right] = num++;
        right--;
        for (int i = right; i >= left; i--) mat[bottom][i] = num++;
        bottom--;
        for (int i = bottom; i >= top; i--) mat[i][left] = num++;
        left++;
    }
    printf("Spiral Matrix (%dx%d):\n", n, n);
    printMatrix(mat, n);
    return 0;
}
