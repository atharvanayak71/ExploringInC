//Atharva Nayak
//0905Cs241063

#include <stdio.h>

int main()
{
   auto int i=10;
   register int j =20;
   printf("main i and j are %d %d\n",i,j);
   change();
   printf("main i and j are %d %d\n",i,j);
}
change()
{
    auto int i=100;
    register int j =200;
    printf("change i and j are %d %d\n",i,j); 
    return 0;
}