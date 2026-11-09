#include <stdio.h>

int main(){
    int arr[10];
    int sum = 0;
    int oddSum = 0;
    double avg;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if ((i + 1) % 2 == 0)
        {
            sum += arr[i];
        }
        else
        {
            oddSum += arr[i];
        }
    }

    avg = oddSum / 5.0;

    printf("sum : %d\n", sum);
    printf("avg : %.1f", avg);

    return 0;
}
