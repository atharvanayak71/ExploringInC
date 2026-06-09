// Atharva Nayak
// 0905CS241063

#include <stdio.h>

void change(int x)
{
    x = 100;
}

int main()
{
    int a = 10;

    change(a);

    printf("%d", a);

    return 0;
}