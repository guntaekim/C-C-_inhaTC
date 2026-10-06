#include <stdio.h>
void SelectSortAscending(int arr[],int n){
    int min; // 최솟값을 저장 할 변수
    int temp; // 두 값을 교환할때 저장할 임시 변수
  for (int i = 0; i < n - 1; i++)
    {
        min = i;    // 현재 i값이 최솟값이라고 가정 했을때 

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])  // 현재값을 다른 값과 비교했을때 맞을시 그 값을 최솟값에저장 
            {
                min = j;  // 더 작은 값을 발견 했기 때문에 그 값의 위치를 min 에 저장
            }
        }

        temp = arr[i]; //현재 값을 임시저장
        arr[i] = arr[min];  // 현재 위치에 가장 작은 값을 넣음 
        arr[min] = temp;  // 임시로 저장했던 값을 최솟값이 있던 자리에 넣음
    }
}

int main(){
    int arr[]={7,4,5,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("초기 상태 배열: [");
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);   
    }
    printf("]\n");

    SelectSortAscending(arr,n);

    printf("정렬된 배열: [");
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);  
    }
    printf("]\n");
    
    return 0;

}