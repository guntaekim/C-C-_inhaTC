#include <stdio.h>

int main(){

    int i;
    int cnt = 0;

    while (1)
    {
        scanf("%d", &i);

        if (i == 0)
        {
            break;
        }

        if (i % 3 == 0 || i % 5 == 0)
        {
            cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}