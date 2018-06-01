#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ev, honap, nap, count=0;

    printf("ev: \n");
    scanf("%d", &ev);

    printf("honap: \n");
    scanf("%d", &honap);

    printf("nap: \n");
    scanf("%d", &nap);

    if (honap == 1)
        count=nap;
    if (honap==2 && ev%4==0)
        count=29+nap;
    else if (honap==2 && ev%4!=0)
        count=28+nap;
    if (ev%4!=0)
        {
            switch (honap)
                {
                    case 3: count= 59+nap;
                    case 4: count= 90+nap;
                    case 5: count= 121+nap;
                    case 6: count= 151+nap;
                    case 7: count= 182+nap;
                    case 8: count= 212+nap;
                    case 9: count= 243+nap;
                    case 10: count= 273+nap;
                    case 11: count= 304+nap;
                    case 12: count= 334+nap;
                }
        }
    else if (ev%4==0)
        {
            switch (honap)
                {
                    case 3: count= 60+nap;
                    case 4: count= 91+nap;
                    case 5: count= 122+nap;
                    case 6: count= 152+nap;
                    case 7: count= 183+nap;
                    case 8: count= 213+nap;
                    case 9: count= 244+nap;
                    case 10: count= 274+nap;
                    case 11: count= 305+nap;
                    case 12: count= 335+nap;
                }
        }
    printf("%i. nap az evbol",count);

    return 0;
}
