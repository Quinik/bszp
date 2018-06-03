#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, osszeg=0;

    printf("n=");
    scanf("%d", &n);

    for (i=1;i<n;i++)
        if (n%i==0)
            osszeg+=i;
    if (osszeg==n)
        printf("%d tokeletes szam.\n", n);
    else
        printf("%d nem tokeletes szam.\n", n);

    return 0;
}
