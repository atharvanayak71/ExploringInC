// Atharva Nayak
// 0905CS241063
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], pattern[50];
    printf("Enter text: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Enter pattern to find: ");
    fgets(pattern, sizeof(pattern), stdin);
    pattern[strcspn(pattern, "\n")] = '\0';
    int count = 0;
    char *ptr = str;
    while ((ptr = strstr(ptr, pattern)) != NULL) {
        count++;
        ptr++;
    }
    printf("Pattern \"%s\" found %d time(s) in \"%s\"\n", pattern, count, str);
    return 0;
}
