#include <stdio.h>

int main(){

    int score;
    int s;
    int sum=0;
    int avg;

    for(int i=0;i<5;i++){
        scanf("%d",&score);
        sum+=score;
        s++;

    }

    printf("sum : %d\n",sum);
    printf("avg : %d\n",sum/s);

    return 0;
}