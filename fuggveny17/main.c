#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calc(int n) {

    int i;
    float num[1000], sum = 0.0,sum2 = 1, szamtani, mertani, q, flon = n;

    while (n > 100 || n <= 0) {
        printf("max 100 szam lehet \n");
        printf("n= ");
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
    q=1/flon;
    printf("%f", q);
    mertani = pow(sum2, q);
    printf("\nSzamtani kozep = %.2f \n Mertani kozep = %.2f\n", szamtani, mertani);

}

int main()
{
    int n;
    printf("mennyi szam van? ");
    scanf("%d", &n);

    calc(n);

    return 0;
}
