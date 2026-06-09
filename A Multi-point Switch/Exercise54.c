//Atharva Nayak
//0905CS241063

#include <stdio.h>

int main()
{
    int i, j;

    for (j = 1; j <= 10; j++)
    {
        for (i = 1; i <= 10; i++)
        {
            if (j < 10)
                goto out;
        }

        printf("Murphy's first law\n");
        printf("If the price of the PC is a dream...\n");
        printf("then the service would be a nightmare\n");
    }

out:
    printf("Dream about a nightmare");

    return 0;
}