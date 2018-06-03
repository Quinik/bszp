#include <stdio.h>
#include <stdlib.h>

void mmToM (int mm);

int main()
{
    int mm;

    printf("d [millimeter] = ");
    scanf("%i", &mm);
    mmToM(mm);
}

void mmToM (int mm)
{
    int cm, m, mme;
    m = mm / 1000;
    cm = (mm % 1000)/10;
    mme = mm % 10;

    printf("%i meter, %i centimeter, %i millimeter", m, cm, mme);
}
