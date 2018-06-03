#include <stdio.h>
#include <stdlib.h>

int strlen(char a[100])
{
    int i;
    for(i = 0; a[i] != '\0'; ++i);
        return i;
}

int main()
{
    char szoveg[1000];

    printf("ird be a szot (space helyett _-t hasznalj): \n");
    scanf("%s", &szoveg);
    printf("strlen = %i", strlen(szoveg));

    return 0;
}
