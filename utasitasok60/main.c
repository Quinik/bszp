#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int i1, i2,i3,i4,i5,i6,i7,i8,i9, i10;
    printf("hanyas szorzotablat szeretned kiiratni?  ");
    scanf("%i", &n);

    for(i=1; i<=10; ++i)
        printf("%d x %d = %d \n", n, i, n*i);

    return 0;
}
