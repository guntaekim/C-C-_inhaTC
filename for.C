#include <stdio.h>


int main(){

    for ( int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for ( int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 1; i <= 6; i++)
    {
        int star;

        if (i<=3)
        {
            star = i;
        }
        else {
            star = 7-i;
        }
        for (int j = 1; j <=star; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}