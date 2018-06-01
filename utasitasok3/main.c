#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%i", &x);
    if (x % 4 == 0) {
        printf("szokoev \n");
    }
    else {
        printf("nem szokoev \n");
    }

    return 0;
}
