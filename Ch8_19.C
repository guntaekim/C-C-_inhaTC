#include <stdio.h>

int main()
{
    int arr[100];
    int cnt = 0;
    int num;
    int max, min;

    while (cnt < 100)
    {
        scanf("%d", &num);

        if (num == 0)
        {
            break;
        }

        arr[cnt] = num;
        cnt++;
    }

    max = arr[0];
    min = arr[0];

    for (int i = 1; i < cnt; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("%d\n", max + min);

    return 0;
}
