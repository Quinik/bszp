#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, n, digit;
    int i, freq=0;

   printf("irj be egy szamot: ");
   scanf("%i", &num);

   printf("keresett szamjegy: ");
   scanf("%i",&n);

   while ( num != 0 )
    {
        digit=num%10;
        if (digit == n)
            freq++;
        num=num/10;
    }

   printf("a keresett szamjegy %ix  fordul elo", freq);

   return 0;

}
