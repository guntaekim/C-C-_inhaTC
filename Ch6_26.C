#include <stdio.h>

int main(){
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);

    int min;
    int max;

    max = (x > y) ? x : y;
    min = (x < y) ? x : y;

    for (int i = 1; i <= 9; i++)
    {
        for (int j = min; j <= max; j++)
        {
            printf("%d * %d = %2d  ",j,i,j*i);
        }

        printf("\n");
        
    }
    
    return 0;

}