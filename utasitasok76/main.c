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
    int a,b;

    printf("elso szam = ");
    scanf("%d",&a);
    printf("masodik szam = ");
    scanf("%d",&b);

    if(baratsagosSzam(a,b))
    {
        printf("%d es %d baratsagos szamok",a,b);
    }
    else
    {
        printf("%d es %d nem baratsagos szamok",a,b);
    }
}
