#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%i", &x);

    if (x == 1) {
        printf("Hetfo");
    } else if (x == 2) {
        printf("Kedd");
    } else if (x == 3) {
        printf("Szerda");
    } else if (x == 4) {
        printf("Csutortok");
    } else if (x == 5) {
        printf("Pentek");
    } else if (x == 6) {
        printf("Szombat");
    } else if (x == 7) {
        printf("Vasarnap");
    } else {
        printf("invalid input");
    }
    return 0;
}
