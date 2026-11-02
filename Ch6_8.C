#include <stdio.h>

int main(){
    int j;
    int sum=0;

    scanf("%d",&j);

    for (int i = j; i <= 100; i++)
    {
        sum += i;
    }

    printf("%d",sum);

    return 0;
    
}