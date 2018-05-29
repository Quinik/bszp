#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("a = ");
    scanf("%i", &a);
    printf("b = ");
    scanf("%i", &b);

    if (b == a+1)
    {
        printf("egymas utani szamok");
    }
    else if (a == b+1)
    {
        printf("egymas utani szamok");
    }
    else
    {
        printf("nem egymas utani szamok");
    }
    return 0;
}
