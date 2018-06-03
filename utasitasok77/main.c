#include <stdio.h>
#include <stdlib.h>

int baratsagosSzam(int a,int b)
{
    int s=0,i;
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            s=s+i;
        }
    }

    if(s==b)
    {
        s=0;
        for(i=1;i<b;i++)
        {
            if(b%i==0)
            {
                s=s+i;
            }
        }

        if(s==a)
            return 1;
        else
            return 0;
    }

    return 0;
}

int main()
{
    int a,b,x;

    printf("n = ");
    scanf("%d",&x);

    for (a=0;a<x;a++)
        for (b=0;b<x;b++)
            if(baratsagosSzam(a,b))
                printf("%d es %d baratsagos szamok \n",a,b);

    return 0;
}

