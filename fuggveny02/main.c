#include <stdio.h>
#include <stdlib.h>

int naphonap(int ho, int nap)
{
    int napszamolo=0, i;

    if(ho<=0 || ho>12 || nap<=0 || nap>31 ||(ho==2 && nap>29))
        return -1;
    else
    {
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
    return napszamolo;
    }

}

int main()
{

    int ho, nap;

    printf("milyen honap?\n");
    scanf("%i", &ho);
    printf("milyen nap?\n");
    scanf("%i", &nap);

    printf("%d-dik nap az evbol", naphonap(ho, nap));

    return 0;
}
