#include <stdio.h>
#include <conio.h>

main()
{
     int a, i, j, n, m, x[30][30];
         printf("sorok szama: ");
         scanf("%d", &n);
         printf("oszlopok szama: ");
         scanf("%d", &m);

        for (i=0;i<n;i++)
            for (j=0;j<m;j++)
                {
                    printf("x[%d][%d]", i, j);
                    scanf("%d", &x[i][j]);
                }

    printf("Mennyivel szeretned novelni az elemeket? /n");
    scanf("%d", &a);

    printf("a letrehozott matrix:\n");
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    x[i][j]+=a;
                    printf("%d ", x[i][j]);
                }
            printf("\n");
            }
    return 0;
}
