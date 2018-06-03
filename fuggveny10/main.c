#include <stdio.h>
#include <stdlib.h>

void secToHMS(int sec);

int main()
{
    int sec;
    printf("Hany masodperc?");
    scanf("%d", &sec);

    secToHMS(sec);

    return 0;
}

void secToHMS(int sec)
{
    int hour=0, min=0, secc=0;
    while(sec!=0)
    {
        if (sec>=3600)
        {
            hour++;
            sec-=3600;
        }
        if (sec>=60)
        {
            min++;
            sec-=60;
        }
        if (sec<60)
        {
            secc=sec;
            sec=0;
        }
    }
    printf("%d ora, %d perc, %d masodperc", hour, min, secc);
}
