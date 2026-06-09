// Atharva Nayak
// 0905CS241063
#include <stdio.h>

int isMagic(int n) {
    while (n >= 10) {
        int sum = 0;
        while (n) { sum += n % 10; n /= 10; }
        n = sum;
    }
    return n == 1;
}

int main() {
    printf("Magic (single digit sum = 1) numbers between 1 and 100:\n");
    for (int i = 1; i <= 100; i++)
        if (isMagic(i)) printf("%d ", i);
    printf("\n");
    return 0;
}
