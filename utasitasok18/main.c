#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Írjunk programot, amely kérjen be három egész számot
    //és írja ki, hogy van-e közöttük két azonos szám!

    float a, b ,c;
    printf("irj be 3 szamot: \n");
    scanf("%f%f%f", &a,&b,&c);
    if (a == b || a == c || b ==c)
        printf("van 2 azonos szam");
    else
        printf("nincs 2 azonos szam");
}
