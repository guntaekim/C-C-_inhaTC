
#include <stdio.h>

int main()
{
    int arr[10] = {0};
    int num;

    while (1)
    {
        scanf("%d", &num);

        if (num == 0)
        {
            break;
        }

        arr[num / 10]++;
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > 0)
        {
            printf("%d : %d\n", i, arr[i]);
        }
    }

    return 0;
}