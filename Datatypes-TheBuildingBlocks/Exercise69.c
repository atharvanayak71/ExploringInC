//Atharva Nayak
//0905CS241063

#include <stdio.h>

int main()
{
    int ch;

    for (ch = 65; ch <= 255;)
    {
        printf("%d %c\n", ch,ch++);
    }
    
    return 0;
}