#include <stdio.h>

int main(){
    int num = 1;
    int sum = 0;

    while (num <= 10)
    {
        sum += num;
        num++;
    }

    printf("num= %d\n", sum);
    printf("sum= %d\n", num);

    return 0;
}

