#include <stdio.h>

void rtn(int i){
    if (i == 0)
    {
        return;
       
    }
    rtn(i-1);
    printf("%d\n", i);
}

    int main(){
        int num;
        printf("정수 입력: ");
        scanf("%d", &num);
        rtn(num);
        return 0;
    }
    