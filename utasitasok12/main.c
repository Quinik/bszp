#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, s, r;
    printf("irj be egy szamot:\n");
    scanf("%i",&x);

    s = pow(2,x);
    printf("2^%i = %i\n", x,s);
    r = s % 10;
    printf("%i utolso szamjegye %i\n",s,r);
}
