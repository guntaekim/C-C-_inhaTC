#include <stdio.h>

int main()
{
    int num[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        num[i] = i + 1;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}
