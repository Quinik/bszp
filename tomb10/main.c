#include <stdio.h>
#include <stdlib.h>

int main()
{
int array[100],i,n,a,szorzat=1;
    printf("Mekkora a tomb? \n");
    scanf("%d", &n);

    printf("ird be a tagokat:\n");

    for (i=0;i<n;i++)
        scanf("%d", &array[i]);

    for (i=0;i<(n-1);i++)
        if(array[i]*array[n-1]<0)
            szorzat*=array[i];

    printf("az utolso tag elojelevel ellentetes elojelu tagok szorzata: %d\n", szorzat);

    return 0;
}
