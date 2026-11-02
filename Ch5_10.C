#include <stdio.h>

int main(){
    int a;

    while (1)
    {
        scanf("%d",&a);

        if (a % 3 == 0)
        {
            printf("%d\n",a/3);
        }
        if (a == -1)
        {
            break;
        }
        
    }
    return 0;
}