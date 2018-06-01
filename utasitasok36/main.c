#include <stdio.h>
#include <stdlib.h>

int main()
 {
    float n;
    int countOsztas=0;

    printf("adj be egy szamot\n");
    scanf("%f", &n);

    while(n>0.01)
    {
        n/=3;
        countOsztas++;
    }

    printf("az osztasok szama %d", countOsztas);


    return 0;
    getchar();
}
