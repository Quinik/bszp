#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int n, i;
    float num[1000], sum = 0.0, sum2 = 1, szamtani, mertani;

    printf("hany szamot akarsz beolvasni? ");
    scanf("%d", &n);

    while (n > 100 || n <= 0) {
        printf("Szamok mennyisege legtobb 1000 lehet \n");
        printf("hany szamot akarsz beolvasni? ");
        scanf("%d", &n);
    }

    for(i = 0; i < n; ++i)
    {
        printf("%d. szam: ", i+1);
        scanf("%f", &num[i]);
        sum += num[i];
        sum2 *= num[i];
    }

    szamtani = sum / n;
    mertani = sqrt(sum2);
    printf("Szamtani atlag = %.2f \n Mertani atlag = %.2f", szamtani, mertani);

    return 0;

}
