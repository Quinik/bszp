#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[100], i, harom=0, ot=0, tizenot=0, num;
        printf("hany szamot akarsz beolvasni? \n");

        scanf("%d", &num);
        printf("a szamok: \n");

        for (i = 0; i < num; i++)
        {
            scanf("%d", &array[i]);
        }

        for (i=0; i < num; i ++)
        {
            if (array[i]%3 == 0    )
            {
                harom++;
            }
        }

        for (i=0; i < num; i ++)
        {
            if (array[i]%5 == 0    )
            {
                ot++;
            }
        }

        for (i=0; i < num; i ++)
        {
            if (array[i]%15 == 0    )
            {
                tizenot++;
            }
        }

        printf("%d szam oszthato harommal, %d ottel es %d tizenottel", harom, ot, tizenot);
    return 0;
}
