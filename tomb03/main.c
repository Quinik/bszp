#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[100], i, n, paratlan=0, paros=0, sorszam=0, sor=0;
    float parosatlag, paratlanatlag;
    printf("Mekkora a tomb?\n");
    scanf("%d", &n);
    printf("ird be az elemeket\n");

    for (i=0;i<n;i++)
        {
            scanf("%d", &array[i]);
        }
    for (i=0;i<n;i++)
        {   if (array[i]%2==0)
                {
                    paros+=array[i];
                    sorszam++;
                }

            else
                {
                    paratlan+=array[i];
                    sor++;
                }
        }

      parosatlag=(float) paros/sorszam;
      paratlanatlag=paratlan/sor;

      printf("a paros szamok atlaga %f \na paratlanoke %f", parosatlag, paratlanatlag);

    return 0;
}
