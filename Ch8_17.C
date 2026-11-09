#include <stdio.h>

int main()
{
    int arr[10];
    int odd = 0;
    int even = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if ((i + 1) % 2 == 1)
        {
            odd += arr[i];
        }
        else
        {
            even += arr[i];
        }
    }

    printf("odd: %d\n", odd);
    printf("even : %d\n", even);

    return 0;
}
