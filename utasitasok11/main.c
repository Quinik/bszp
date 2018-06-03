#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;
    int res;
    printf("irj be 2 egesz szamot:\n");
    scanf("%i%i", &x,&y);
    fmod(x, y) == 0 ? printf("Masodik osztoja az elsonek") : printf("Masodik NEM osztoja az elsonek");
}
