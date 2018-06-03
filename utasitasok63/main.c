#include <stdio.h>
#include <stdlib.h>

int main()
{
    int freq=0, n, nxn, digit, nxnSave;

    printf("ird be a szamot ");
    scanf("%i", &n);
    nxn=n*n;
    nxnSave=nxn;

    while(nxn!=0)
    {
        digit = nxn%10;
        if (digit==0)
            freq++;
        nxn/=10;
    }
    printf("%i^2 = %i \n", n, nxnSave);
    printf("n = %i szam negyzeteben %ix fordul elo a 0-as", n, freq);

    return 0;
}
