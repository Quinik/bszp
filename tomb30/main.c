#include <stdio.h>
#include <ctype.h>

int main()
{
    char input[100], k, output[100];
    int i = 0;
    printf("Irj be egy karakterlancot: ");
    scanf("%s", &input);

    while (input[i] != '\0') {
        k = input[i];
        if (k >= 'A' && k <= 'Z') {
            output[i] = input[i] + 32;
        } else if (k >= 'a' && k <= 'z') {
            output[i] = input[i] - 32;
        }
        i++;
    }
    puts(output);

    return 0;
}
