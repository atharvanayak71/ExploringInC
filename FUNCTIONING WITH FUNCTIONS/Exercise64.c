// Atharva Nayak
// 0905CS241063

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 5, y = 10;

    swap(&x, &y);

    printf("%d %d", x, y);

    return 0;
}