#include <stdio.h>

int main(){
    int i;
    int sum = 0;
    int cnt = 0;
    int avg;

    while (1)
    
    {
        scanf("%d",&i);

        if (i == 0)
        {
            break;    
        }

        sum +=i;
        cnt++;
    }

    if (cnt > 0)
    {
        avg = sum / cnt;

        printf("cnt = %d\n", cnt);
        printf("sum = %d\n", sum);
        printf("avg = %d\n", avg);
    }
    return 0;
    
}