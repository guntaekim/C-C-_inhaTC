#include <stdio.h>

int main()
{
    int num[100];
    int count = 0;
    int i;

    while (count < 100)
    {
        scanf("%d", &num[count]);

        if (num[count] == 0)
        {
            break;
        }

        count++;
    }

    for (i = count - 1; i >= 0; i--)
    {
        printf("%d ", num[i]);
    }

    return 0;
}
