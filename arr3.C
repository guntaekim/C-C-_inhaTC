#include <stdio.h>

int main(){

    int s;
    int c[11]={0};

    while (1)
    {
        scanf("%d", &s);

        if (s == 0)
        {
            break;
        }
        c[s/10]++;

    }

    for (int i = 0; i < 10; i++)
    {
        if (c[i]>0)
        {
            printf("%d:%d preson\n",i*10,c[i]);
        }
        
    }
    return 0;
    
}