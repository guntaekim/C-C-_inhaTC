#include <stdio.h>

int main(){
    int x;
    int even = 0;
    int odd = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&x);
        if (x%2 == 0)
        {
            even++;
        }
        else
        odd++;
        
    }

    printf("even : %d\n",even);
    printf("odd : %d\n",odd);
    
    return 0;
}