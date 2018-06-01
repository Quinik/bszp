#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sebesseg, megengedettSebesseg;
    printf("mekkora a sebesseg? \n");
    scanf("%f", &sebesseg);
    printf("mekkora a megengedett sebesseg? \n");
    scanf("%f", &megengedettSebesseg);

    if (sebesseg>megengedettSebesseg) {
        printf("%f", sebesseg);
    }
    else
        printf("nem lepte tul a sebesseg korlatot");


    return 0;
}
