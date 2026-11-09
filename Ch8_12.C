#include <stdio.h>

int main(){
    int arr[100];
    int num;
    int cnt = 0;
    int max, min;

    while (1)
    {
        scanf("%d", &num);

        if (num == 0)
        {
            break;
        }

        arr[cnt] = num;
        cnt++;
    }

    max = arr[0];
    min = arr[0];

    for (int i = 1; i < cnt; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("%d", max - min);

    return 0;
}
