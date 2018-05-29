#include <stdio.h>
#include <stdlib.h>

//ax=b
int main()
{
    float x, a, b;
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    x=b/a;
    printf("ax=b megoldasa x-re: \n ");

    printf("x = %f",x);
    return 0;
}
