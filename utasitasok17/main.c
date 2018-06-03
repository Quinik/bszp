#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i;
     printf("Hany evet dolgozott?  \n");
     scanf("%i", &i);
     if (i % 5 == 0 && i > 0)
        printf("Jar jutalom.\n");
     else
        printf("Nem jar jutalom.\n");
}

