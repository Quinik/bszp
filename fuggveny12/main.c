#include <stdio.h>
#include <stdlib.h>

void romai(int num)
{
    int del[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    char * sym[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
    char res[64] = "\0";
    int i = 0;
    while (num){
        while (num/del[i]){
            strcat(res, sym[i]);
            num -= del[i];
        }
        i++;
    }
    puts(res);
}

int main()
{
    int i,limiter = 1000;

    for (i=1;i<=limiter;i++)
        romai(i);
    return 0;
}
