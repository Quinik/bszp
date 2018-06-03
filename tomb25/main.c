#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,j, ok;
    int a[100][100];
    int b[100][100];

    printf("sor n=");
    scanf("%d", &n);

    printf("oszlop m=");
    scanf("%d", &m);
    printf("a matrix feltolese \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("b matrix feltolese \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("a matrix: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%d ", a[i][j]);
            printf("\n");
    }

    printf("b matrix: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%d ", b[i][j]);
            printf("\n");
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]==b[i][j])
                ok=1;
            else
                ok=0;
        }
    }
    ok?printf("A ket matrix egyforma"):printf("A ket maxtix nem egyezik meg");

    return 0;
}
