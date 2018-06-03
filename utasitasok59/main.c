#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;

    printf("x coord = ");
    scanf("%f", &x);
     printf("y coord = ");
    scanf("%f", &y);

    if (x>0 && y>0)
        printf("I negyed");
    else if (x<0 && y>0)
        printf("II negyed");
    else if (x<0 && y<0)
        printf("III negyed");
    else
        printf("IV negyed");
    return 0;
}
