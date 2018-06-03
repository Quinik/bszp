#include <stdio.h>
#include <math.h>

int amstr(int szam)
{
    int originalSzam, remainder, result = 0, n = 0 ;

     originalSzam = szam;

    while (originalSzam != 0)
    {
        originalSzam /= 10;
        ++n;
    }

    originalSzam = szam;

    while (originalSzam != 0)
    {
        remainder = originalSzam%10;
        result += pow(remainder, n);
        originalSzam /= 10;
    }

    if(result == szam)
        return 1;
    else
        return 0;
}

int main()
{
    int szam;

    printf("Irj be egy szamot: ");
    scanf("%d", &szam);

    if(amstr(szam)==1)
        printf("%d Armstrong szam.", szam);
    else
        printf("%d nem Armstrong szam.", szam);

    return 0;
}
