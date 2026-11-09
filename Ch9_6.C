
#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    int i = 2;

    scanf("%d", &n);

    arr[0] = 100;
    arr[1] = n;

    printf("%d %d ", arr[0], arr[1]);

    while (1)
    {
        arr[i] = arr[i - 2] - arr[i - 1];

        printf("%d ", arr[i]);

        if (arr[i] < 0)
        {
            break;
        }

        i++;
    }

    return 0;
}
