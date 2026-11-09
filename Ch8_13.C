#include <stdio.h>

int main(){
    int score[10];
    int sum = 0;
    double avg;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &score[i]);
        sum += score[i];
    }

    avg = sum / 10.0;

    printf("sum = %d\n", sum);
    printf("avg = %.1f", avg);

    return 0;
}
