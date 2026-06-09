// Atharva Nayak
// 0905CS241063
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int rev = 0, orig = n;
    while (n > 0) { rev = rev * 10 + n % 10; n /= 10; }
    printf("Reversed: %d\n", rev);
    if (orig == rev) printf("%d is a palindrome number\n", orig);
    else printf("%d is not a palindrome number\n", orig);
    return 0;
}
