#include <stdio.h>

int main()
{
    int arr[3][3];
    int sum1, sum2;
    int total = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        sum1 = 0;

        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
            sum1 += arr[i][j];
        }

        printf("%d\n", sum1);
        total += sum1;
    }

    for (int j = 0; j < 3; j++)
    {
        sum2 = 0;

        for (int i = 0; i < 3; i++)
        {
            sum2 += arr[i][j];
        }

        printf("%d ", sum2);
    }

    printf("%d\n", total);

    return 0;
}