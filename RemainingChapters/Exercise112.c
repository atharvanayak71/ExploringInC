// Atharva Nayak
// 0905CS241063
#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0) sum += i;
    if (sum == n) printf("%d is a perfect number\n", n);
    else printf("%d is not a perfect number\n", n);
    printf("Perfect numbers up to 1000: ");
    for (int i = 2; i <= 1000; i++) {
        int s = 0;
        for (int j = 1; j < i; j++) if (i % j == 0) s += j;
        if (s == i) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
