#include <stdio.h>
#include <stdlib.h>

int main()

{
    int array[100], i, b=0, num;
    float atlag, a=0, j=0;
        printf("hany tanulo van? \n");

        scanf("%d", &num);
        printf("ird be a jegyeket \n");

        for (i = 0; i < num; i++)
        {
            scanf("%d", &array[i]);
        }

        for (i=0; i < num; i++)
        {
            if (array[i] < 5    )
            {
                b++;
            }
        }

        for (i=0; i < num; i++)
        {
            if (array[i] > 5    )
            {
                a++;
                j= j + array[i];
            }
        }

       atlag= j/a;

        printf("%f az atmeno jegyek atlaga es %d buko van", atlag, b);

        return 0;
}
