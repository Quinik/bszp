#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float num ,q1, q2;

    printf("x = ");
    scanf("%f", &num);

        if (num < -1) {
            printf(" f(x) = 2");
        } else if ( num < 1 && -1 <= num) {
            q1 = pow(num, 2) + 1;
            printf(" f(x) = %f ", q1);
        } else if ( num >= 1) {
            q2 = sqrt(num);
            printf(" f(x) = %f", q2);
        }

    return 0;

}
