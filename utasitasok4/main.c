#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    scanf("%c",&x);
    switch(x)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("%c maganhangzo \n",x);
            break;
        default:
            printf("%c nem maganhangzo \n",x);
    }
    return 0;
}


//allapatsuk meg egy beolvasott karakterrol, hogy maganhangzo vagy sem!
