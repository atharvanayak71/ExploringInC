// Atharva Nayak
// 0905CS241063
#include <stdio.h>

int countSetBits(int n) {
    int count = 0;
    while (n) { count += n & 1; n >>= 1; }
    return count;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Binary representation of %d: ", n);
    for (int i = 31; i >= 0; i--) {
        if (i == 7 || i == 15 || i == 23) printf(" ");
        printf("%d", (n >> i) & 1);
    }
    printf("\nNumber of set bits: %d\n", countSetBits(n));
    printf("Left shift by 2: %d\n", n << 2);
    printf("Right shift by 1: %d\n", n >> 1);
    return 0;
}
