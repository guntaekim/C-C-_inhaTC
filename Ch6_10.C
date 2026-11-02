#include <stdio.h>

int main(){
    int a;
    int cnt3 = 0;
    int cnt5 = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a);
        if ( a % 3 == 0)
        {
            cnt3++;
        }
        if (a % 5 == 0)
        {
            cnt5++;
        }
        
    }
    
    printf("Multiplies of 3 = %d\n",cnt3);
    printf("Multiplies of 5 = %d\n",cnt5);

    return 0;
}