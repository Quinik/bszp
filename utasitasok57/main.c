#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mm, cm, m, mme;

    printf("d [millimeter] = ");
    scanf("%i", &mm);

    m = mm / 1000;
    cm = (mm % 1000)/10;
    mme = mm % 10;

    printf("%i meter, %i centimeter, %i millimeter", m, cm, mme);
}
