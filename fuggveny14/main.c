#include <stdio.h>
#include <stdlib.h>

void koord(float x, float y);

int main()
{
    float x, y;

    printf("x coord = ");
    scanf("%f", &x);
     printf("y coord = ");
    scanf("%f", &y);

    koord(x, y);

    return 0;
}

void koord(float x, float y)
{
    if (x>0 && y>0)
        printf("I negyed");
    else if (x<0 && y>0)
        printf("II negyed");
    else if (x<0 && y<0)
        printf("III negyed");
    else
        printf("IV negyed");
}
