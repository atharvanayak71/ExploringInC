// Atharva Nayak
// 0905CS241063
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int upper = 0, lower = 0, digits = 0, special = 0;
    for (int i = 0; str[i]; i++) {
        if (isupper(str[i])) upper++;
        else if (islower(str[i])) lower++;
        else if (isdigit(str[i])) digits++;
        else special++;
    }
    printf("Uppercase: %d\nLowercase: %d\nDigits: %d\nSpecial: %d\n", upper, lower, digits, special);
    return 0;
}
