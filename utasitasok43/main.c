#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;

    printf("az egyik szam=");
    scanf("%d", &m);
    printf(" a masik szam=");
    scanf("%d", &n);

    while(m!=n)
    {
        if(m > n)
            m -= n;
        else
            n -= m;
    }
    printf("legnagyobb kozos oszto = %d \n", m);

    return 0;
}
