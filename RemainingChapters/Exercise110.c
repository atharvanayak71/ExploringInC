// Atharva Nayak
// 0905CS241063
#include <stdio.h>

int isArmstrong(int n) {
    int orig = n, sum = 0, digits = 0, temp = n;
    while (temp) { digits++; temp /= 10; }
    temp = n;
    while (temp) {
        int d = temp % 10;
        int p = 1;
        for (int i = 0; i < digits; i++) p *= d;
        sum += p;
        temp /= 10;
    }
    return sum == orig;
}

int main() {
    printf("Armstrong numbers between 1 and 1000:\n");
    for (int i = 1; i <= 1000; i++)
        if (isArmstrong(i)) printf("%d ", i);
    printf("\n");
    return 0;
}
