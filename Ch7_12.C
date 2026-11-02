#include <stdio.h>

int main(){

    char ch = 'A';
    int x = 1;
    int a;

    scanf("%d",&a);

    for (int i = 1; i <= a; i++)
    {
        for ( int j = 0; j <= a-i ; j++)
        {
            printf("%d ",x);
            x++;
        }
        for ( int j = 1; j<= i ; j++)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
        
    }
    return 0;
    
}