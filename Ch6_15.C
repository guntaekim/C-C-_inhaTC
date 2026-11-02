#include <stdio.h>

int main(){

    for (int i = 1; i <= 9; i++)
    {
        printf("%d x %d = %2d    %d x %d = %2d    %d x %d = %2d\n", 2, i, 2*i,3,i,3*i,4,i,4*i);
    }
    return 0;
}