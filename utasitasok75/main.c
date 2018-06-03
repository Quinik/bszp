#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, k, osszeg=0, limit=1000000;

    for (k=0;k<limit;k++)
    {
        for (i=1;i<k;i++)
            if (k%i==0)
                osszeg+=i;
        if (osszeg==k)
            printf("%d tokeletes szam.\n", k);
        osszeg=0;
    }

    return 0;
}
