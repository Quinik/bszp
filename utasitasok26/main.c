#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, szorzat;
    float hanyados;

    printf("a= ");
        scanf("%f", &a);
    printf("b= ");
        scanf("%f", &b);

    if (a>b && (a-b)<10) {
        szorzat = a*b;
        printf("%f ", szorzat);
    } else if (b>a && (b-a)<10) {
        szorzat = a*b;
        printf("%f ", szorzat);
    } else if (a>b) {
        hanyados = a/b;
        printf("a/b = %f", hanyados);
    } else if (b>a) {
        hanyados = b/a;
        printf("b/a = %f", hanyados);
    }

    return 0;
}








/*

Készítsünk programot, amely bekér két tetszőleges egész számot! Ha a két szám különbsége
nem több 10-nél, akkor írassuk ki a két szám szorzatát, különben a kisebb szám és a nagyobb
szám hányadosát 4 tizedesjegy pontossággal.

*/
