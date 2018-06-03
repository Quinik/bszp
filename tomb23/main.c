#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, a[100][100], sum=0, countr=0;
    float avg;

    printf("n=");
    scanf("%i", &n);

    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
        {
            printf("a[%i][%i]=", i, j);
            scanf("%d", &a[i][j]);
        }

    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
            printf("%i ", a[i][j]);
            printf("\n");

    }
    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
            if(i==j)
            {
                sum+=a[i][j];
                countr++;
            }


    avg = (float)sum/(float)countr;
    printf("%i\n",countr);
    printf("foatlon levo elemek osszege: %i\n",sum);
    printf("foatlon levo elemek atlaga: %f\n",avg);
    return 0;
}
