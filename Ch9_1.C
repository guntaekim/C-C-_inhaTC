
#include <stdio.h>

int main()
{
    int arr[11] = {0};
    int num;

    while (1)
    {
        scanf("%d", &num);

        if (num < 1 || num > 10)
        {
            break;
        }

        arr[num]++;
    }

    for (int i = 1; i <= 10; i++)
    {
        if (arr[i] > 0)
        {
            printf("%d : %d\n", i, arr[i]);
        }
    }

    return 0;
}
