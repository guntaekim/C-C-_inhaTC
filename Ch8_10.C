#include <stdio.h>

int main()
{
    int num[10];
    int i;
    int min;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }

    min = num[0];

    for (i = 1; i < 10; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }

    printf("%d\n", min);

    return 0;
}
