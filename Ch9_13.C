
#include <stdio.h>

int main()
{
    int arr[5][5] = {0};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }

            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}
