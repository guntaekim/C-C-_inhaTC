#include<stdio.h>

int main() {

    int score;
    char grade;

    printf("점수를 입력하세요: ");
    scanf("%d", &score);

    switch (score/10)
    {
    case 10:
    case 9:    
        grade = 'A';                  // 간단한 코드면 print f로 바로 줘도 되지않을까?
        break;

    case 8:
        grade = 'B';
        break;

    case 7:
        grade = 'C';
        break;

    case 6:
        grade = 'D';
        break;
    
    default:
        grade = 'F';
        break;
    }

printf("학점 : %c", grade);
return 0;
}