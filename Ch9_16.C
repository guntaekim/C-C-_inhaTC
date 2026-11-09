
#include <stdio.h>

int main()
{
    int arr[11] = {0};
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

    for (int i = 10; i >= 0; i--)
    {
        if (arr[i] > 0)
        {
            printf("%d : %d\n", i * 10, arr[i]);
        }
    }

    return 0;
}
