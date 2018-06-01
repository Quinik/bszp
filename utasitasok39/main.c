#include <stdio.h>
#include <stdlib.h>

int main()

 {

        int array[100], i, num, pmin=array[0], nmax=array[0];
        printf ( "Hany szamot akarsz beolvasni? \n");

        scanf("%d", &num);
        printf("ird be a szamokat \n");

        for (i = 0; i < num; i++)
        {
            scanf("%d", &array[i]);
        }


        for (i=0; i < num; i ++)
        {
            if (array[i] >= 0 && array[i] < pmin   )
            {
               pmin=array[i] ;
            }
        }



        for (i=0; i < num; i ++)
        {
            if (array[i] < 0 && array[i] > nmax   )
            {
                nmax=array[i];
            }
        }



        printf("%d a legkisebb beolvasott pozitiv szam %d a legnagyobb beolvasott negativ szam ", pmin, nmax);



    return 0;
}

