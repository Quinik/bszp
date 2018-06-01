#include <stdio.h>
#include <stdlib.h>



    int main()
{
        int array[100], i, n=0, p=0, z=0, num;
        printf("Hany szamot akarsz beolvasni? \n");

        scanf("%d", &num);
        printf("ird be a szamokat \n");

        for (i = 0; i < num; i++)
        {
            scanf("%d", &array[i]);
        }

        for (i=0; i < num; i ++)
        {
            if (array[i] > 0    )
            {
                p++;
            }
        }

        for (i=0; i < num; i ++)
        {
            if (array[i] < 0    )
            {
                n++;
            }
        }

        for (i=0; i < num; i ++)
        {
            if (array[i] == 0    )
            {
                z++;
            }
        }

        printf("%d db > 0, %d db < 0 , %d db = 0 ", p, n, z);



    return 0;
}
