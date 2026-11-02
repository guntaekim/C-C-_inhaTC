#include <stdio.h>

int main(){
    int n;
    int score;
    int sum = 0;

    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&score);
        sum += score;

    }
    
    printf("avg = %d\n", sum / n);
    if (sum/n >= 80)
    {
        printf("pass"); 
    }
    else
    printf("fail");

    return 0;

}