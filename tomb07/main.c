#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[100],i,n,a,osszeg=0;
    printf("mekkora a tomb?\n");
    scanf("%d", &n);

    printf("ird be a tagokat:\n");

    for (i=0;i<n;i++)
        {
            scanf("%d", &array[i]);
        }
    printf("irj be egy szamot, amelyre az oszthatosagot szeretned vizsgalni\n");
    scanf("%d", &a);

    for (i=1;i<n;i++)
            {
                if (array[i]%a==0)
                    {
                        osszeg+=array[i];
                    }
            }
     printf("azon szamok osszege a tombbol, amelyek oszthatoak az altalad valasztott szammal: %d\n", osszeg);
    return 0;
}
