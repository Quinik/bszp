#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, osszeg=0, drb=0;
    float szk;


      printf("irj be szamokat a 0-s vegjelig \n");
      scanf("%d", &n);

      while (n!=0)
      {
               if (n%2==0)
               {
                   osszeg=osszeg+n;
                   drb++;
               }
       scanf("%d", &n);
      }

      szk=osszeg/drb;
      printf("a beolvasott paros szamok szamtani kozepe = %f", szk);



    return 0;

      }
