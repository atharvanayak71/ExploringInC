// Atharva Nayak
// 0905CS241063
#include <stdio.h>

int main() {
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printf("Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) printf("%3d", mat[i][j]);
        printf("\n");
    }
    printf("\nTranspose:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) printf("%3d", mat[j][i]);
        printf("\n");
    }
    return 0;
}
