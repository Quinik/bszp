#include <stdio.h>
#include <string.h>

void megford(char*, int, int);

int main()
{
    char a[100];
    printf("Ird be a string-et amit meg szeretnel forditani: \n");
    gets(a);
    megford(a, 0, strlen(a)-1);
    printf("%s\n", a);

   return 0;
}

void megford(char *x, int kezd, int vege)
{
   char c;

   if (kezd >= vege)
      return;
   c= *(x+kezd);
   *(x+kezd)= *(x+vege);
   *(x+vege)= c;

   megford(x, ++kezd, --vege);
}
