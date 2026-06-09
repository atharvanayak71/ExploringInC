// Atharva Nayak
// 0905CS241063
#include <stdio.h>

union Data {
    int i;
    float f;
    char ch;
};

int main() {
    union Data d;
    d.i = 65;
    printf("As int: %d\n", d.i);
    d.f = 3.14f;
    printf("As float: %.2f\n", d.f);
    d.ch = 'A';
    printf("As char: %c\n", d.ch);
    printf("Size of union: %zu bytes\n", sizeof(union Data));
    return 0;
}
