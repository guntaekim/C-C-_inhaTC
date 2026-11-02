#include <stdio.h>

int main(){
    int num = 1;
    int sum = 0;
    int i;

    scanf("%d",&i);
    if (i<100)
    {
         while (num <= i)
        {
          sum  += num;
          num++;
        }
    }
    
    printf("%d",sum);

    return 0;

   
}