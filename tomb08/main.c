#include <stdio.h>
#include <stdlib.h>

int main()
{
     int array[100],i,n,a;
    printf("mekkora a tomb? \n");
    scanf("%d", &n);
    printf("ird be a tagokat:\n");

    for (i=0;i<n;i++)
        scanf("%d", &array[i]);
    printf("azoknak a tagoknak a helye amelyek elojele megegyezik az utolsotag elojelevel:\n");

    for (i=0;i<n-1;i++)
        if (array[i]*array[n-1]>0)
            printf("%d.\n", i);
    return 0;
}
