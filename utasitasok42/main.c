#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int array[100], i, digits, elsoDigit, utolsoDigit, p, num;
        printf("Hany szamot akarsz beolvasni? \n");

        scanf("%d", &num);
        printf("A szamok: \n");

        for (i = 0; i < num; i++)
        {
            scanf("%d", &array[i]);
        }

        digits= log10(array[i]);
        elsoDigit= (array[i])/pow(10,digits);
        utolsoDigit= (array[i])%10;


        for (i=0; i < num; i ++)
        {
             if (array[i]%11==5 && elsoDigit==2*utolsoDigit)
            {
                p++;
            }
        }

       printf("%d szam van ami teljesiti a felteteleket", p);

    return 0;
}
