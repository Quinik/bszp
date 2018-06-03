#include <stdio.h>
#include <stdlib.h>

int main()
{
    int eredeti, szam, maradek, eredmeny = 0, n = 0;

    printf("irj be egy szamot: ");
    scanf("%i", &szam);

    eredeti = szam;

    while (eredeti != 0)
        {
        eredeti /= 10;
        ++n;
        }

    eredeti = szam;

    while (eredeti != 0) {
        maradek = eredeti %10;
        eredmeny += pow(maradek, n);
        eredeti /= 10;
    }

    if (eredmeny == szam) {
        printf("%d Armstrong fele szam", szam);
    } else {
        printf("%d nem Armstrong fele szam", szam);
    }
}
