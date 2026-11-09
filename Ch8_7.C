#include <stdio.h>

int main()
{
    int month;

    while (1)
    {
        scanf("%d", &month);

        if (month < 1 || month > 12)
        {
            break;
        }

        if (month == 2)
        {
            printf("28\n");
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            printf("30\n");
        }
        else
        {
            printf("31\n");
        }
    }

    return 0;
}
