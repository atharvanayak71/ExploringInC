//Atharva Nayak
//0905Cs241063

#include <stdio.h>

int main()
{
   static c=5;
   printf ("c=%d\n",c--);
   if (c)
   main ();
    return 0;
}