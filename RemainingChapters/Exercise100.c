// Atharva Nayak
// 0905CS241063
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str = (char *)malloc(100 * sizeof(char));
    if (!str) { printf("Memory allocation failed\n"); return 1; }
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    int len = strlen(str);
    str = (char *)realloc(str, (len + 20) * sizeof(char));
    strcat(str, " - updated");
    printf("Result: %s\n", str);
    free(str);
    return 0;
}
