// Atharva Nayak
// 0905CS241063
#include <stdio.h>

int main() {
    int a[3][3], b[3][3];
    printf("Enter 3x3 matrix A:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) scanf("%d", &a[i][j]);
    printf("Enter 3x3 matrix B:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) scanf("%d", &b[i][j]);
    printf("A + B:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) printf("%4d", a[i][j] + b[i][j]);
        printf("\n");
    }
    printf("A - B:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) printf("%4d", a[i][j] - b[i][j]);
        printf("\n");
    }
    return 0;
}
