#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;
    printf("irj be ket szamot:\n");
    scanf("%f%f", &x,&y);

    if ( x > y ) {
        printf("%f > %f", x,y);
    } else if (y > x) {
        printf("%f < %f", x,y);
    } else if (x == y) {
        printf("%f = %f", x,y);
    }
    return 0;
}
