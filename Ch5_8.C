#include <stdio.h>


int main(){
    int i;
    int s = 0;
    int l = 0;
    

    while (1)
    
    {
        scanf("%d",&i);

        if (i>=50)
        {
            l++;
        }
        if (i<50)
        {
            s++;
        }

        if (i >= 100)
        {
            printf("small:%d\n",s);
            printf("large:%d\n",l);

            break;    
        }
    }

    

    return 0;
    
}   