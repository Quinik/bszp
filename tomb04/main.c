#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[100], i, n, pozitiv=0, negativ=0;
    printf("mekkora a vektor? \n");
    scanf("%d", &n);

    printf("ird be a vektor elemeit (<100):\n");
    for (i=0;i<n;i++)
        {
            scanf("%d", &array[i]);
        }

      for (i=0;i<n;i++)
        {
            if (array[i]>=0)
                {
                    pozitiv+=array[i];
                }

            else
                {
                    negativ+=array[i];
                }
        }

     printf("a pozitiv szamok osszege: %d \na negativ szamok osszege: %d\n", pozitiv,negativ);
    return 0;
}
