#include <stdio.h>
#include <stdlib.h>

int main()
{int n;
    float k,vegossz,C;

    printf("mekkora osszegrol van szo? \n");
    scanf("%f", &C);
    printf("hany evre? \n");
    scanf("%d", &n);

    printf("kamatlab szazalekban = ");
    scanf("%f", &k);

    vegossz= C + pow(1+k/100, n);
    printf("A vegosszeg: %f", vegossz);






    return 0;
}
