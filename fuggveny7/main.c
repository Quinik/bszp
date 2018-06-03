#include <stdio.h>
#include <stdlib.h>

void leelgyszer(int m, int n);

int lnko(int x, int y);

int main()
{
    int m, n;

    printf("m=");
    scanf("%d", &m);
    printf("n=");
    scanf("%d", &n);

    printf("lnko = %d \n", lnko(m, n));
    leelgyszer(m, n);

    return 0;
}


void leelgyszer(int m, int n)
{
    int a=m;
    int b=n;
    printf("m/n = %d/%d \n", m, n);
    printf("m/n = %d/%d \n", m/lnko(m,n), b/lnko(m,n));
}

int lnko(int x, int y)
{
    while(x!=y)
    {
        if(x > y)
            x -= y;
        else
            y -= x;
    }
    return x;
}
