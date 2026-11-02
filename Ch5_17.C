#include <stdio.h>

int main(){

    int i;
    int sum = 0;
    int cnt = 0;
    double avg;

    while (1)
    {
        scanf("%d", &i);

        if (i < 0 || i > 100)
        {
            break;
        }

        sum += i;
        cnt++;
    }

    if (cnt > 0)
    {
        avg = (double)sum / cnt;

        printf("sum = %d\n", sum);
        printf("avg = %.1f\n", avg);
    }

    return 0;
}