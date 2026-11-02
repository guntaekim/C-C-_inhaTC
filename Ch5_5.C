#include <stdio.h>

int main(){
    int i;
    while (1)
    {
        scanf("%d",&i);

        if(i < 0| i > 100)
        {
            break;
        }

        if (i >= 80)
        {
            printf("Pass\n");
        }
        else
        {
            printf("Fail\n");
        }
    }
    
    return 0;
}