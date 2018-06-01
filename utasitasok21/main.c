#include <stdio.h>
#include <stdlib.h>

int main()
{

    int ho, nap;
    int napszamolo=0, i;
    printf("milyen honap?\n");
    scanf("%i", &ho);
    printf("milyen nap?\n");
    scanf("%i", &nap);

    switch (ho) {
        case 1: napszamolo=0; break;
        case 2: napszamolo=31; break;
        case 3: napszamolo=59; break;
        case 4: napszamolo=90; break;
        case 5: napszamolo=120; break;
        case 6: napszamolo=151; break;
        case 7: napszamolo=181; break;
        case 8: napszamolo=212; break;
        case 9: napszamolo=242; break;
        case 10: napszamolo=273; break;
        case 11: napszamolo=303; break;
        case 12: napszamolo=334; break;
    }
    napszamolo+=nap;

    printf("%i . dik nap az evbol \n",napszamolo );

    if (napszamolo%7==1)
        printf("Vasarnap");
    else if (napszamolo%7==2)
        printf("Hetfo");
    else if (napszamolo%7==3)
        printf("Kedd");
    else if (napszamolo%7==4)
        printf("Szerda");
    else if (napszamolo%7==5)
        printf("Csutortok");
    else if (napszamolo%7==6)
        printf("Pentek");
    else if (napszamolo%7==0)
        printf("Szombat");


    return 0;
}


//Készítsünk programot, amely egy 2006-os dátumról (hó, nap) megmondja, hogy milyen napra
//esik!


//2006.01.01 vasarnap
/*

    for (i=1; i<=ho; i++)
    {
        if (ho%2==1) {
            napszamolo+=31;
        } else if (ho == 2) {
            napszamolo+=28;
        } else if (ho%2==0) {

            napszamolo+=30;
        }
    }
        printf("%i",napszamolo);
*/
