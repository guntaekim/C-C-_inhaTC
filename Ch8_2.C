#include <stdio.h>

int main()
{
    char ch[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        scanf(" %c", &ch[i]);
    }

    for (i = 0; i < 10; i++)
    {
        printf("%c", ch[i]);
    }

    return 0;
}
