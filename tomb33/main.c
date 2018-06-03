#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num, ford=0, m, e;
   printf("Ird be egy szamot [max 255 szamjegy]: ");
   scanf("%d", &num);

   e=num;
   while(e!=0)
   {
      m=e%10;
      ford=ford*10+m;
      e/=10;
   }

   if(ford==num)
      printf("%d azonos forditottjaval",num);
   else
      printf("%d nem azonos forditottjaval",num);
   return 0;
}
