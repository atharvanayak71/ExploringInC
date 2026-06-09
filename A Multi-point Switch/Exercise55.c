//Atharva Nayak
//0905CS241063

#include <stdio.h>

int main()
{
    unsigned int num, num2, no_dig = 0, p;
    int i;

    printf("Enter any positive integer: ");
    scanf("%u", &num);

    num2 = num;

    do
    {
        no_dig++;
        num2 = num2 / 10;
    } while (num2 != 0);

    for (; no_dig > 0; no_dig--, num %= p)
    {
        p = 1;

        for (i = no_dig - 1; i > 0; i--)
            p = p * 10;

        switch (num / p)
        {
            case 0: printf("ZERO "); break;
            case 1: printf("ONE "); break;
            case 2: printf("TWO "); break;
            case 3: printf("THREE "); break;
            case 4: printf("FOUR "); break;
            case 5: printf("FIVE "); break;
            case 6: printf("SIX "); break;
            case 7: printf("SEVEN "); break;
            case 8: printf("EIGHT "); break;
            case 9: printf("NINE "); break;
        }
    }

    return 0;
}