#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aEvszam, bEvszam;
    int qwer=0, i;

    printf("elso evszam: ");
    scanf("%i", &aEvszam);
    printf("masodik evszam: ");
    scanf("%i", &bEvszam);

    if (aEvszam<bEvszam) {
            for (i=aEvszam;i<bEvszam;i++)
                if(i%4==0)
                    qwer++;
    } else if (aEvszam>bEvszam){
            for (i=aEvszam;i>bEvszam;i--)
                if(i%4==0)
                    qwer++;
            }

    if (aEvszam>bEvszam)
    printf("%i szokoev van %i es %i kozott.",qwer, bEvszam, aEvszam );

    if (bEvszam>aEvszam)
    printf("%i szokoev van %i es %i kozott.",qwer, aEvszam, bEvszam );

    return 0;
}


//hany szokoev van 2 evszam kozott?
