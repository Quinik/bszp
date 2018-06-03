#include <stdio.h>
#include <stdlib.h>

void parosDigitOut(int n);

int main()
{
    int szam;
    printf("Irj be egy termeszetes szamot.\n");
    scanf("%d", &szam);

    parosDigitOut(szam);

    return 0;
}


void parosDigitOut(int n)
{
    int countr=0, digit, s=n;
    while(n!=0)
    {
        digit = n%10;
        if (digit%2==0)
            countr++;
        n=n/10;
    }
    printf("%i szamban %i darab paros szamjegy van.", s, countr);
}
