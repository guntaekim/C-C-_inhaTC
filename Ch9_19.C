
#include <stdio.h>

int main()
{
    int arr[4][3];
    int sum;
    int total = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        sum = 0;

        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }

        printf("%d\n", sum);
        total += sum;
    }

    printf("%d\n", total);

    return 0;
}
