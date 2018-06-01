#include <stdio.h>
#include <stdlib.h>

int main()
{
    char csirke;
    scanf("%c", &csirke);
    if (csirke >= 'A' && csirke <= 'Z') {
        printf("nagybetu");
    } else if (csirke >= 'a' && csirke <= 'z') {
        printf("kisbetu");
    } else {
        printf("nem betu");
    }

    return (0);
}

// Olvassunk be egy karaktert! Írjuk ki, hogy az illető karakter kisbetű-e!
