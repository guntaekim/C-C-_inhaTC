#include <stdio.h>

int main()
{
    int n;
    int num[100];
    int i;
    int max;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    max = num[0];

    for (i = 1; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }

    printf("%d\n", max);

    return 0;
}
