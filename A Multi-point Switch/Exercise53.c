//Atharva Nayak
//0905CS241063

#include <stdio.h>

int main()
{
    char ch = 'E';

    if (ch >= 'A' && ch <= 'Z')
        printf("Capital Letter");
    else if (ch >= 'a' && ch <= 'z')
        printf("Small case Letter");
    else if (ch >= '0' && ch <= '9')
        printf("Digit");
    else
        printf("Any other character");

    return 0;
}