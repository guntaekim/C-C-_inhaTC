#include <stdio.h>

int main(){
    int arr[5];
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    sum = arr[0] + arr[2] + arr[4];

    printf("%d\n", sum);

    return 0;
}
