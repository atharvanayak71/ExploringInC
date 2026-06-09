// Atharva Nayak
// 0905CS241063
#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct Student s;
    printf("Enter name: ");
    fgets(s.name, 50, stdin);
    s.name[strcspn(s.name, "\n")] = '\0';
    printf("Enter roll number: ");
    scanf("%d", &s.rollNo);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("\n--- Student Details ---\n");
    printf("Name: %s\nRoll No: %d\nMarks: %.2f\n", s.name, s.rollNo, s.marks);
    return 0;
}
