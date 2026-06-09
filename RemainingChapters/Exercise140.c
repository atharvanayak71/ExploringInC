// Atharva Nayak
// 0905CS241063
#include <stdio.h>

int isHappy(int n) {
    int slow = n, fast = n;
    do {
        int s = 0, t = slow;
        while (t) { int d = t % 10; s += d * d; t /= 10; }
        slow = s;
        for (int i = 0; i < 2; i++) {
            int s2 = 0, t2 = fast;
            while (t2) { int d = t2 % 10; s2 += d * d; t2 /= 10; }
            fast = s2;
        }
    } while (slow != fast);
    return slow == 1;
}

int main() {
    printf("Happy numbers between 1 and 100:\n");
    for (int i = 1; i <= 100; i++)
        if (isHappy(i)) printf("%d ", i);
    printf("\n");
    return 0;
}
