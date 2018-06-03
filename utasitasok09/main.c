#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Add meg az A, B es C erteket: \n ");
    scanf("%i%i%i", &a, &b, &c);

    if ( (a*a) == (b*b) + (c*c) ||
         (b*b) == (a*a) + (c*c) ||
         (c*c) == (b*b) + (a*a) )
    {
        printf("A megadott szamok pithagoraszi szamok \n");
    } else {
        printf("A szamok nem pithagoraszi szamok \n");
    }
}
