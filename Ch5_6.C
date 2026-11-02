#include <stdio.h>

int main(){
    int i;
    while (1)
    {
        scanf("%d",&i);
        if (i>0)
        {
            printf("posetive number\n");
        }
        else if (i<0)
        {
            printf("negative number\n");
        }
        else 
        break;
    }
    
    return 0;
}