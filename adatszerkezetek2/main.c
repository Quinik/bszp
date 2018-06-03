#include <stdio.h>
#include <stdlib.h>

int main()
{

    typedef struct  {
        char* csnev, knev;
        double atlag;
                    } tanulo;
        tanulo t;

    t.csnev = 'F';
    t.knev = 'G';
    t.atlag = 9.65;
    printf("csnev = %c\nknev = %c\natlag = %f\n", t.csnev, t.knev, t.atlag);
    return 0;
}
