// Atharva Nayak
// 0905CS241063
#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "w");
    if (!fp) { printf("File error\n"); return 1; }
    for (int i = 1; i <= 10; i++) fprintf(fp, "%d\n", i * i);
    fclose(fp);
    fp = fopen("numbers.txt", "r");
    int num, sum = 0, count = 0;
    while (fscanf(fp, "%d", &num) == 1) { sum += num; count++; }
    fclose(fp);
    printf("Sum of squares 1-10: %d\nAverage: %.2f\n", sum, (float)sum / count);
    return 0;
}
