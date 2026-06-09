//Atharva Nayak
//0905CS241063

#include <stdio.h>

int main()
{
    int ch;

    for (ch = 65; ch <= 255; ch++)
    {
        printf("%d %c\n", ch, (unsigned char)ch);
    }
    
    return 0;
}