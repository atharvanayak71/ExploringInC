// Atharva Nayak
// 0905CS241063
#include <stdio.h>

void writeFile() {
    FILE *fp = fopen("data.txt", "w");
    if (!fp) { printf("Cannot open file\n"); return; }
    fprintf(fp, "Hello, Atharva!\n");
    fprintf(fp, "This is file handling in C.\n");
    fprintf(fp, "Writing data to a file.\n");
    fclose(fp);
    printf("Data written to data.txt\n");
}

void readFile() {
    FILE *fp = fopen("data.txt", "r");
    if (!fp) { printf("Cannot open file\n"); return; }
    char line[200];
    printf("\nContents of data.txt:\n");
    while (fgets(line, sizeof(line), fp)) printf("%s", line);
    fclose(fp);
}

int main() {
    writeFile();
    readFile();
    return 0;
}
