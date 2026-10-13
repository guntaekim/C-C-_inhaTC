#include <stdio.h>

#define MAX_STUDENT 50


void bubbleSort(int*arr,int size);

void bubbleSort(int*arr,int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size - i -1; j++)
        {
            if (*(arr+j)>*(arr+j+1))
            {
                int temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
            
        }
        
    }
    
}


int main()
{
    int numstudent;

    printf("학생 수 입력: ");

    scanf("%d",&numstudent);

    if (numstudent>MAX_STUDENT)
    {
        printf("학생수를 초과 하였습니다");
        return 1;
    }

    int*scorepointer;
    int score[MAX_STUDENT];
    scorepointer = score;

    for (int i = 0; i < numstudent; i++)
    {
        printf("%d번 학생의 성적 입력: ",i+1);
        scanf("%d",scorepointer+i);
    }
    
    bubbleSort(scorepointer,numstudent);

    printf("정렬된 성적");
    for (int i = 0; i < numstudent; i++)
    {
        printf("%d ",*(scorepointer+i));
    }

    printf("\n\n최고 성적: %d \n",*(scorepointer + numstudent - 1));
    printf("최하 성적: %d\n",*scorepointer);


    return 0;
    

}
