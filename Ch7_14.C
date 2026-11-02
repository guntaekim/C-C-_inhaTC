#include <stdio.h>

int main(){

    int x;
    scanf("%d",&x);

    for (int i = x; i >= 1; i -= 2)
    {
        for (int j = 1; j <= (x-i)/2; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    int start = 3;

    if (x % 2 == 0)
    {
        start = 2;
    }

    for (int i = start; i <= x; i += 2)
    {
        for (int j = 1; j <= (x-i)/2; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}