// Atharva Nayak
// 0905CS241063
#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float gpa;
};

int main() {
    struct Student students[3] = {
        {1, "Alice", 9.1f},
        {2, "Bob", 8.5f},
        {3, "Charlie", 9.4f}
    };
    FILE *fp = fopen("students.bin", "wb");
    if (!fp) { printf("File error\n"); return 1; }
    fwrite(students, sizeof(struct Student), 3, fp);
    fclose(fp);
    struct Student loaded[3];
    fp = fopen("students.bin", "rb");
    fread(loaded, sizeof(struct Student), 3, fp);
    fclose(fp);
    printf("Students from binary file:\n");
    for (int i = 0; i < 3; i++)
        printf("ID: %d | Name: %s | GPA: %.1f\n", loaded[i].id, loaded[i].name, loaded[i].gpa);
    return 0;
}
