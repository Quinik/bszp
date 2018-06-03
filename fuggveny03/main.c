#include <stdio.h>
#include <stdlib.h>

int lkkt(int n1, int n2)
{
    int minMultiple;
     minMultiple = (n1>n2) ? n1 : n2;
     while(1)
    {
        if( minMultiple%n1==0 && minMultiple%n2==0 )
        {
            return minMultiple;
            break;
        }
        ++minMultiple;
    }
}

int main()
{
    int x, y;
    printf("irj be ket pozitiv egesz szamot ");
    scanf("%d %d", &x, &y);

    printf("%d es %d legkissebb kozos tobbszorose %d",x, y, lkkt(x, y));

    return 0;
}
