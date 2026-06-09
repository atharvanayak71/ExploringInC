// Atharva Nayak
// 0905CS241063
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int len = strlen(str);
    int isPalindrome = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) { isPalindrome = 0; break; }
    }
    printf("\"%s\" is %s palindrome\n", str, isPalindrome ? "a" : "not a");
    return 0;
}
