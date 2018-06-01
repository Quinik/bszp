#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i=2,n=1000,prim, c, x;

     for (i;i<=n;i++)
         {
             x=1;
             for (c=2;c<=i/2;c++)
               {
                   if (i%c==0)
                   {
                       x=0;
                       break;
                   }
               }
           if (x==1)
              {
                  printf("%d\n", i);
              }
         } getchar();




    return 0;
}

