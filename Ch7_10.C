#include <stdio.h>

int main(){

    int x;
    char ch = 'A';
    scanf("%d",&x);

    for (int i = x; i >= 1; i--)
    {
        for (int j = 1; j <= i ; j++)
        {
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}