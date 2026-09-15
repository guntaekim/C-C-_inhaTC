#include<stdio.h>

int main() {
    int year;
    printf("연도를 입력하세요: ");
    scanf("%d", &year);

    if(year % 4 == 0 && year % 100 != 0||year % 400 == 0){
        printf(" %d년는 윤년입니다", year);
    }
    else {
        printf(" %d년는 평년입니다", year);

    }

    return 0;
}