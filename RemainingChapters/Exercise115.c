// Atharva Nayak
// 0905CS241063
#include <stdio.h>

long long binomialCoeff(int n, int k) {
    if (k > n - k) k = n - k;
    long long res = 1;
    for (int i = 0; i < k; i++) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

int main() {
    int n;
    printf("Enter rows for Pascal's triangle: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) printf("  ");
        for (int j = 0; j <= i; j++) printf("%4lld", binomialCoeff(i, j));
        printf("\n");
    }
    return 0;
}
