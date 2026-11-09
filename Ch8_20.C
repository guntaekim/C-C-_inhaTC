
#include <stdio.h>

int main()
{
    int arr[100];
    int i = 0;
    int sum = 0;
    int cnt = 0;
    float avg;

    while (i < 100)
    {
        scanf("%d", &arr[i]);

        if (arr[i] == 0)
        {
            break;
        }

        if (arr[i] % 5 == 0)
        {
            sum += arr[i];
            cnt++;
        }

        i++;
    }

    avg = (float)sum / cnt;

    printf("Multiples of 5 : %d\n", cnt);
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);

    return 0;
}
