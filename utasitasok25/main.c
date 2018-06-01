#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sex;
    int age;
    int price;
    int ok=0;

    printf("Milyen nemu? m OR f \n");
    while (ok == 0) {

        scanf("%c", &sex);
        if (sex == 'm')
            {
            ok = 1;
            break;
            }
        else if (sex == 'f')
            {
            ok = 1;
            break;
            }
        else
            {
             printf("Hibas input.");
            }

    }


    printf("Eletkor? \n");
        scanf("%i", &age);

    if (sex == 'f' && age<20)
        price = 0;
    else if (sex == 'f' && age>=20)
        price = 30;
    else if (sex == 'm' && age<=20)
        price = 20;
    else if (sex == 'm' && age>=20)
        price = 30;


    printf("%i RON-t fizet\n", price);
    return 0;
}

/*
Egy diszkóba aszerint lehet belépőjegyet kapni, hogy hány éves az illető. A belépőjegy egyben
tombola is, fizetni érte csak a kapusnál kell majd, a legfeljebb húszévesek diákjegyet kapnak
(20 RON), az idősebbek felnőtt jegyet (30 RON). A kapuban a diákjeggyel rendelkezők közül
a lányoknak nem kell fizetniük a belépőjegyért, mindenki másnak a jegyen szereplő díjat.
Készítsünk programot, amely a szükséges adatok bekérése után megállapítja és kiírja, hogy az
éppen belépő vendég fizet-e és ha igen, mennyit!
*/
