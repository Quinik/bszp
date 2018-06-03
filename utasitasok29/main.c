#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kamatlab, k,alap=50.0, res;
    int n;

    printf("Mekkora a kamatlab? (szazalekban) \n");
    scanf("%f", &kamatlab);
    k=kamatlab/100;
    printf("Hany evre helyezzuk letetbe? \n");
    scanf("%i", &n);

    res = alap*(1+k*n);
    printf("%f penzunk lesz %i ev mulva, %f kamatlab mellett \n", res, n, k);

    return 0;
}
