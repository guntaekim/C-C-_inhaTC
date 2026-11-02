#include <stdio.h>

int main(){
    int x,y;

    scanf("%d",&x);
    scanf("%d",&y);


    for (int i = 1; i <= x; i++)
    {   
            int n = 1;
        for (int j = 1; j <= y; j++)
        {
            printf("%3d",n*i);
            n++;
        }
        printf("\n");
    }

    return 0;
    
}