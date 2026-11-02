#include <stdio.h>

int main(){
    int n;
    int x;
    double sum = 0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&x);
        sum += x;
    }

    printf("%.2f",sum/n);
    return 0;
    
}