#include <stdio.h>

int main()
{
    char alphabet[26];
    int i;

    for (i = 0; i < 26; i++)
    {
        alphabet[i] = 'A' + i;
    }

    for (i = 25; i >= 0; i--)
    {
        printf("%c ", alphabet[i]);
    }

    return 0;
}
