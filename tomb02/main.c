#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[30],i,n,a = 0;
    printf("irj be egy szamot (1 <= n <= 30) \n");
    scanf("%d", &n);
    array[0]=0;

    for (i=0;i<n;i=i+3)
        {
            array[a]=i;
            printf("%d\n", array[a]);
            a++;
        }


    return 0;
}
