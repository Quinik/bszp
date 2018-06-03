#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, osszeg=0, i;

    printf("a= ");
    scanf("%i", &a);
    printf("b= ");
    scanf("%i", &b);

    printf("a=%i \nb=%i \n", a, b);

      for (i=a+1;i<b;i++)
        {
            osszeg+=i;
        }

    printf("\n%i es %i kozotti szamok osszege = %i", a, b, osszeg);

    return 0;
}
