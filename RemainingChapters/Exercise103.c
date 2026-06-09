// Atharva Nayak
// 0905CS241063
#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter ID, Name, Salary for employee %d: ", i + 1);
        scanf("%d %s %f", &emp[i].id, emp[i].name, &emp[i].salary);
    }
    float maxSal = emp[0].salary;
    int maxIdx = 0;
    for (int i = 1; i < 3; i++)
        if (emp[i].salary > maxSal) { maxSal = emp[i].salary; maxIdx = i; }
    printf("Highest paid: %s (%.2f)\n", emp[maxIdx].name, emp[maxIdx].salary);
    return 0;
}
