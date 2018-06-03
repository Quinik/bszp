#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Hanyadik nap?    ");
    scanf("%i", &n);

    if (n <= 7 && n > 0){
        switch(n) {
        case 1: printf("Hetfo"); break;
        case 2: printf("Kedd"); break;
        case 3: printf("Szerda"); break;
        case 4: printf("Csutortok"); break;
        case 5: printf("Pentek"); break;
        case 6: printf("Szombat"); break;
        case 7: printf("Vasarnap"); break;
        }
    } else {
        printf("invalid input, n<7");
    }
}
