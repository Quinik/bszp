#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%i", &x);
    if (x % 12 == 0) {
        printf("oszthato 12-vel \n");
    }
    else {
        printf("nem oszthato 12-vel \n");
    }

    return 0;
}
