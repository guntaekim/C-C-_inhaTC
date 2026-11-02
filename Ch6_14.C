#include <stdio.h>

int main(){
    int a = 2;
    
    for (int i = 1; i <=5; i++)
    {
        
        for (int j = 1; j <= 5; j++)
        {
            printf("%d ",a);
            a++;
        }

        a = 2+i;
        printf("\n");
        
    }
}