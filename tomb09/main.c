#include <stdio.h>
#include <stdlib.h>

int main()
{
     int array[100],i,n,osszeg=0;
    printf("Mekkora a tomb? \n");
    scanf("%d", &n);

    printf("ird be a tagokat:\n");

    for (i=0;i<n;i++)
            scanf("%d", &array[i]);

    for (i=0;i<n;i++)
        if (array[i]<array[0])
            osszeg+=array[i];
    printf("\n");
    printf("az elso beolvasott szamnal kisebb szamok osszege: %d\n", osszeg);

    return 0;
}
