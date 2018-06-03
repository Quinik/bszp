#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, count=0, digit;

    printf("Irj be egy szamot \n");
    scanf("%d", &n);

    while(n!=0)
    {
        digit = n%10;
        if (digit%2 == 0)
            count++;
        n=n/10;
    }

    printf("Paros szamjegyek szama: %d", count);

    return 0;
}
