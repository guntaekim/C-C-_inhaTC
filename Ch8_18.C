#include <stdio.h>

int main()
{
    double weight[6];
    double sum = 0;
    double avg;

    for (int i = 0; i < 6; i++)
    {
        scanf("%lf", &weight[i]);
        sum += weight[i];
    }

    avg = sum / 6;

    printf("%.1f\n", avg);

    return 0;
}
