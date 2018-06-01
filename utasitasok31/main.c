#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
     int n;
     int y;
     printf("irj be egy pozitiv egesz szamot\n");
     scanf("%d", &n);
        y=sqrt(n);

        if(y*y==n)
     printf("negyzetszam");
        else
     printf("nem negyzetszam");

        return 0;
}
