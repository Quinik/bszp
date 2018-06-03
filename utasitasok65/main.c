#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b, i, osszeg=0, szorzat=1;
    int arr[100];
    printf("Hany szamot akarsz beolvasni? \n");
    scanf("%d", &n);

    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    for (i=0;i<n;i++)
        scanf("%d", &arr[i]);

    for (i=0;i<n;i++)
        if(a<=arr[i] && arr[i]<b && arr[i]<0)
            {
                szorzat*=arr[i];
                osszeg+=arr[i];
            }

    printf("Osszeg = %d \n", osszeg);
    printf("Szorzat = %d \n", szorzat);

    return 0;
}
