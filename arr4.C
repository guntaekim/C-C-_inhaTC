#include <stdio.h>

int main()
{
    int a,b,c;
    int cnt[10]={0};
    int r;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    r = a*b*c;
    printf("%d",r);
    while (r>0)
    {
        cnt[r%10]++;
        r=r/10;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",cnt[i]);
    }
    return 0;
    
}