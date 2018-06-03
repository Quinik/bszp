#include <stdio.h>
#include <conio.h>

main()
{
     int i, j, n, m, x[30][30], y[30][30];
         printf("sorok szama: ");
         scanf("%d", &n);
         printf("oszlopok szama: ");
         scanf("%d", &m);

    printf("a letrehozott matrix:\n");
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    x[i][j]=i+j;
                    printf("%d ", x[i][j]);
                }
            printf("\n");
            }
    return 0;
}
