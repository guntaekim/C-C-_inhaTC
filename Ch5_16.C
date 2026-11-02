#include <stdio.h>

int main(){

    int i;
    int odd = 0;
    int even = 0;

    while (1)
    {
        scanf("%d", &i);

        if (i == 0)
        {
            break;
        }

        if (i % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("odd = %d\n", odd);
    printf("even = %d\n", even);

    return 0;
}