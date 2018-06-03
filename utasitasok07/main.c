#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, res;
    printf("Adjon meg egy szamot: ");
    scanf("%i", &n);
    res = n > 0 ? n : -n;

    printf("Abszolut ertek: %i", res);
}
