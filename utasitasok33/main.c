#include <stdio.h>
#include <stdlib.h>

int main()

{
    int n,x;
    printf("n= \n");
    scanf("%d", &n);

    if(ceil(log2(n))== floor(log2(n)))
        printf("2-nek negyzete");
    else printf("2-nek nem negyzete");


    return 0;
}
