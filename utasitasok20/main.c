#include <stdio.h>
#include <stdlib.h>

int main()
{
   int ho, sz;
   printf("Adj meg egy honapot (szamban): \n");
   scanf("%i", &ho);
   if ( ho >= 1 && ho <= 2 || ho == 12) {
        printf("Tel");
    } else if ( ho >= 3 && ho <= 5) {
        printf("Tavasz");
    } else if ( ho >= 6 && ho <= 8) {
        printf("Nyar");
    } else if ( ho >= 9 && ho <= 11) {
        printf("Osz");
   } else { printf("az evnek csak 12 honapja van"); }

   return 0;
}
