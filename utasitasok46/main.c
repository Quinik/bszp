#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i=0, sorszam=0, k=0, max=0;

    printf("irj be szamokat 0-s vegjelig \n");
    scanf("%d", &n);

    while (n!=0)
        {
            if (n>0)
            {
                i=i+n;
            sorszam++;
            }

            if (n<0)
            {
                k=k+n;
            }

            if (n>max)
            {
                max=n;
            }

            scanf("%d", &n);
        }
    printf("a pozitiv szamok osszege: %d \n", i);
    printf("a negativ szamok osszege: %d \n", k);
    printf("         legnagyobb szam: %d \n", max);


    return 0;
}
