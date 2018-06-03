#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[100], negyzet[100], i,n,index=-1;
    printf("mekkora a tomb?\n");
    scanf("%d", &n);

    printf("ird be az elemeket:\n");

    for (i=0;i<n;i++)
        {
            scanf("%d", &array[i]);
        }

    for (i=0;i<n;i++)
        {
            negyzet[++index]=array[i]*array[i];
        }
    printf("az uj tomb elemei:\n");

    for (i=0;i<=index;i++)
            {
                printf("%d\n", negyzet[i]);
            }
    return 0;
}
