#include <stdio.h>

int main(){
    int x;
    int sum = 0;
    scanf("%d",&x);

    for (int i = 1; i <= x; i++)
    {
        if (i%5==0)
        {
            sum += i;
        }
        
    }
    printf("%d",sum);

    return 0;
}