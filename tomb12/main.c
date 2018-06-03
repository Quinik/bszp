#include <stdio.h>
#include <stdlib.h>

int main()
{
       int array[30], i, n, osszeg=0 ;
    while (n>30){
        printf("Mekkora a tomb? (max 30)\n");
        scanf("%d", &n);
    }


    printf("ird be az ertekeket\n");
    for (i=0;i<n;i++)
            scanf("%d", &array[i]);

    printf("azon nem nulla elemek osszege amelyek kisebbek az elso beolvasott szamnal:\n");

    for (i=0;i<n;i++)
        if ((array[i]<array[0]) && (array[i]!=0))
            osszeg+=array[i];

    printf("%d\n", osszeg);


    return 0;
}
