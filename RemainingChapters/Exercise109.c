// Atharva Nayak
// 0905CS241063
#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPrime(n)) printf("%d is prime\n", n);
    else printf("%d is not prime\n", n);
    printf("Primes up to %d: ", n);
    for (int i = 2; i <= n; i++)
        if (isPrime(i)) printf("%d ", i);
    printf("\n");
    return 0;
}
