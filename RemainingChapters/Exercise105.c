// Atharva Nayak
// 0905CS241063
#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex add(struct Complex a, struct Complex b) {
    struct Complex res;
    res.real = a.real + b.real;
    res.imag = a.imag + b.imag;
    return res;
}

int main() {
    struct Complex c1 = {3.0, 4.0}, c2 = {1.5, 2.5};
    struct Complex sum = add(c1, c2);
    printf("C1 = %.1f + %.1fi\n", c1.real, c1.imag);
    printf("C2 = %.1f + %.1fi\n", c2.real, c2.imag);
    printf("Sum = %.1f + %.1fi\n", sum.real, sum.imag);
    return 0;
}
