#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[100],oddindex=-1, i, n;
    int odd[100];
    printf("Hany elemet tartalmaz a tomb?\n");
    scanf("%d", &n);

    printf("ird be a tagokat\n");

    for (i=0;i<n;i++)
            scanf("%d", &array[i]);

    for (i=0;i<n;i++)
            if (array[i]%2!=0)
                    odd[++oddindex]=array[i];

    printf("az uj vektor elemei: \n");
    for (i=0;i<=oddindex;i++)
                printf("%d \n", odd[i]);

    return 0;
}
