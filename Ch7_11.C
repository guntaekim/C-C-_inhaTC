#include <stdio.h>

int main(){

    char ch = 'A';
    int x = 1;

    for (int i = 4; i >= 1; i--)
    {
        for ( int j = 0; j<= 4-i ; j++)
        {
            printf("%c ",ch);
            ch++;
        }
        for ( int j = 1; j<= i ; j++)
        {
            printf("%d ",x);
            x++;
        }
        printf("\n");
        
    }
    return 0;
    
}