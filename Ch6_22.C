#include <stdio.h>

int main(){
    int x,y;
    int j=0;
    int min = 0;
    int max = 0;
    int sum = 0;
    double avg = 0;

    scanf("%d",&x);
    scanf("%d",&y);

    max = (x > y) ? x : y;
    min = (x < y) ? x : y;

    for (int i = min; i <= max; i++)
    {
        if (i%3==0||i%5==0)
        {
            sum += i;
            j++;
        }
        
    }

    avg = (double)sum/j;

    printf("sum : %d\n",sum);
    printf("avg : %.1f\n",avg);

    return 0;
    
}