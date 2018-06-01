#include <stdio.h>
#include <stdlib.h>

int main()
{
       int a,b,maxA,maxB,maxkul;
       printf("szampar elso tagja: ");
       scanf("%d", &a);

       printf("szampar masodik tagja: ");
       scanf("%d", &b);



       while(maxkul!=0){
           if (a>maxA) a==maxA;
           if (b>maxB) b==maxB;

       maxA=a;
       maxB=b;
       maxkul=abs(a-b);

           printf("a legnagyobb kulonbsegu szampar: %d, %d \d", maxA,maxB);


       }
        return 0;
}
