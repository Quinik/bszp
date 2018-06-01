#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,k=0;
  printf("adj meg egy szamot\n");
  scanf("%d", &n);

  while(n!=0)
    {
        n/=10;
        k++;
    }
  printf("a szamjegyek szama: %d", k);

    return 0;
    getch();
}
