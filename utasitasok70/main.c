#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    float an, sum=0;

    printf("Hanyadik tagig? \n");
    scanf("%d", &n);

    for (i=2;i<=n;i++)
    {
        an=(float)1/(i-1);
        printf("%d. tag = %f \n", i, an);
        sum+=an;
    }
    printf("osszeg = %f\n", sum);

    return 0;
}
