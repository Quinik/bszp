#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, m, n, foatloSzorzat=1, osszeg=0, foalattSzorzat=1, t[3][3];
    printf("sor m=");
    scanf("%d", &m);
    printf("oszlop n=");
    scanf("%d", &n);

    for (i=0;i<n;i++)
    {
            for (j=0;j<m;j++)
                {
                    printf("t[%d][%d] = ", i, j);
                    scanf("%d", &t[i][j]);
                }
    }
    for (i=0;i<n;i++)
    {
            for (j=0;j<m;j++)
                    printf("%d ", t[i][j]);
                    printf("\n");
    }


    for (i=0;i<n;i++)
            for (j=0;j<m;j++)
                {
                    if (i==j)
                    {
                        foatloSzorzat*=t[i][j];
                    }
                    if (i<j)
                    {
                        osszeg+=t[i][j];
                    }
                    if (i>j)
                    {
                        foalattSzorzat*=t[i][j];
                    }
                }


    printf("foatlon levo elemek szorzata = %d\n", foatloSzorzat);
    printf("foatlo feletti elemek osszege = %d\n", osszeg);
    printf("foatlo alatti elemek szorzata = %d\n", foalattSzorzat);
    return 0;
}
