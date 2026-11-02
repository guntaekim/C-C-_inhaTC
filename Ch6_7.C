#include <stdio.h>

int main(){
    int j;
    int sum = 0;

    scanf("%d",&j);

    for (int i = 1; i <= j; i++)
    {
        sum += i;
    }
    
    printf("%d",sum);

    return 0;
}