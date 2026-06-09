// Atharva Nayak
// 0905CS241063
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    int words = 0, inWord = 0;
    for (int i = 0; str[i]; i++) {
        if (!isspace(str[i]) && !inWord) { words++; inWord = 1; }
        else if (isspace(str[i])) inWord = 0;
    }
    printf("Word count: %d\n", words);
    return 0;
}
