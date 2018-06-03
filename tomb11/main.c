#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int array[100], i, n ;
    printf("Mekkora a tomb? \n");
    scanf("%d", &n);

    printf("ird be az ertekeket\n");
    for (i=0;i<n;i++)
            scanf("%d", &array[i]);

     printf("azon ertekek amik kisebbek az elso szam moduluszanal: \n");

    for (i=1;i<n;i++)
        if (array[i]< abs(array[0]))
            printf("%d\n", array[i]);

    return 0;
}
