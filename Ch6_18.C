#include <stdio.h>

int main(){
    int x,y;
    int min;
    int max;
    scanf("%d",&x);
    scanf("%d",&y);

    max = (x > y) ? x : y;
    min = (x < y) ? x : y;

    for (int i = min; i <= max; i++)
    {
        printf("%d ",i);
    }
    return 0;
}