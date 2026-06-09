// Atharva Nayak
// 0905CS241063
#include <stdio.h>
#include <math.h>

int main() {
    int low, high;
    printf("Enter range [low high]: ");
    scanf("%d %d", &low, &high);
    printf("Strong numbers between %d and %d:\n", low, high);
    for (int n = low; n <= high; n++) {
        int temp = n, sum = 0;
        while (temp) {
            int d = temp % 10;
            int fact = 1;
            for (int i = 1; i <= d; i++) fact *= i;
            sum += fact;
            temp /= 10;
        }
        if (sum == n) printf("%d ", n);
    }
    printf("\n");
    return 0;
}
