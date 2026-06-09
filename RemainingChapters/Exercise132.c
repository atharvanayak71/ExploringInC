// Atharva Nayak
// 0905CS241063
#include <stdio.h>

int main() {
    int n;
    printf("Enter rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) printf(" ");
        int num = 1;
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("%d", num);
            if (j < i) num++;
            else num--;
        }
        printf("\n");
    }
    return 0;
}
