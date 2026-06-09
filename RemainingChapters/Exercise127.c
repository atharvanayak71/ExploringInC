// Atharva Nayak
// 0905CS241063
#include <stdio.h>
#include <string.h>

int main() {
    FILE *src = fopen("source.txt", "w");
    fprintf(src, "This is source file content.\nLine 2.\nLine 3.\n");
    fclose(src);
    src = fopen("source.txt", "r");
    FILE *dest = fopen("destination.txt", "w");
    if (!src || !dest) { printf("File error\n"); return 1; }
    char ch;
    while ((ch = fgetc(src)) != EOF) fputc(ch, dest);
    fclose(src); fclose(dest);
    printf("File copied successfully.\n");
    dest = fopen("destination.txt", "r");
    char line[100];
    while (fgets(line, sizeof(line), dest)) printf("%s", line);
    fclose(dest);
    return 0;
}
