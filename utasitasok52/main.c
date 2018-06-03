#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, a, b;

    printf("m=");
    scanf("%d", &m);
    printf("n=");
    scanf("%d", &n);

    a=m;
    b=n;

    while(m!=n)
    {
        if(m > n)
            m -= n;
        else
            n -= m;
    }

    printf("lnko = %d \n", m);

    printf("m/n = %d/%d \n", a, b);
    printf("m/n = %d/%d \n", a/m, b/m);



    return 0;
}
