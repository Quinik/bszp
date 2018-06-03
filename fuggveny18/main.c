#include <stdio.h>
#include <stdlib.h>

int osszeg(int t[100], int a, int b, int n);
int szorzat(int t[100], int a, int b, int n);

int main()
{
    int i, n, t[100], a, b;

    printf("a=");
    scanf("%d", &a);

    printf("b=");
    scanf("%d", &b);

    printf("Hany eleme van a tombnek? ");
    scanf("%d", &n);

    for (i=0;i<n;i++)
    {
        printf("t[%d] = ", i);
        scanf("%d", &t[i]);
    }

    printf("osszeg = %d \n", osszeg(t, a, b, n));
    printf("szorzat = %d \n", szorzat(t, a, b, n));


    return 0;
}

int osszeg(int t[100], int a, int b, int n)
{
    int i, osszeg=0;

    for (i=0;i<n;i++)
        if(t[i]>=a && t[i]<b && t[i]<0)
            osszeg+=t[i];
    return osszeg;
}

int szorzat(int t[100], int a, int b, int n)
{
    int i, szorzat=1;

    for (i=0;i<n;i++)
        if(t[i]>=a && t[i]<b && t[i]<0)
            szorzat*=t[i];
    return szorzat;
}
