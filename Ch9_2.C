
#include <stdio.h>

int main()
{
    int arr[26] = {0};
    char ch;

    while (1)
    {
        scanf(" %c", &ch);

        if (ch < 'A' || ch > 'Z')
        {
            break;
        }

        arr[ch - 'A']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > 0)
        {
            printf("%c : %d\n", 'A' + i, arr[i]);
        }
    }

    return 0;
}
