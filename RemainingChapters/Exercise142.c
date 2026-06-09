// Atharva Nayak
// 0905CS241063
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toUpperCase(char *str) {
    for (int i = 0; str[i]; i++) str[i] = toupper(str[i]);
}

void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) str[i] = tolower(str[i]);
}

void toggleCase(char *str) {
    for (int i = 0; str[i]; i++)
        str[i] = isupper(str[i]) ? tolower(str[i]) : toupper(str[i]);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    char copy[100];
    strcpy(copy, str); toUpperCase(copy); printf("Uppercase: %s\n", copy);
    strcpy(copy, str); toLowerCase(copy); printf("Lowercase: %s\n", copy);
    strcpy(copy, str); toggleCase(copy); printf("Toggled:   %s\n", copy);
    return 0;
}
