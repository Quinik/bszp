#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, i;
    unsigned long long factorial = 1;

    printf("irj be egy szamot: ");
    scanf("%d",&n);

    if (n < 0)
        printf("Csak pozitiv szam lehet.");

    else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;
        }
        printf("%d! = %llu", n, factorial);
    }

    return 0;

}
