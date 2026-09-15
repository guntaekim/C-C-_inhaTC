#include <stdio.h>

int main(){

    int num1;
    int num2;
    int box;

    printf(" 숫자 입력: ");
    scanf("%d\n",&num1);
    scanf("%d",&num2);

    box =  num2;

    while (box !=0) // box > 0 , while 문 사용시 증감식 필요
    {
      printf("%d\n",num1*(box%10));
      box/=10;
    }
    printf("%d", num1*num2);

    return 0;
}