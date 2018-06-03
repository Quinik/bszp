#include <stdio.h>
#include <conio.h>

main()
{
     int i, j, n=4, k, x[30][30];
         printf("n=%d \n", n);


    printf("letrehozott matrix:\n");
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    x[i][j]=i;
                    printf("%d ", x[i][j]);
                }
            printf("\n");
            }
    return 0;
}
