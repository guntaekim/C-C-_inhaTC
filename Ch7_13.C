#include <stdio.h>

int main(){
    int x;
    scanf("%x",&x);
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
        
    }

    for (int i = x; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
        
    }
    return 0;
}
