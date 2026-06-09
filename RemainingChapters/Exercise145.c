// Atharva Nayak
// 0905CS241063
#include <stdio.h>
#include <string.h>

void removeVowels(char *str, char *result) {
    int j = 0;
    for (int i = 0; str[i]; i++) {
        char c = str[i];
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U')
            result[j++] = c;
    }
    result[j] = '\0';
}

int main() {
    char str[100], result[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    removeVowels(str, result);
    printf("Without vowels: %s\n", result);
    return 0;
}
