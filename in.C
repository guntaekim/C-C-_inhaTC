#include <stdio.h>

void InSortAscending(int arr[], int n){
    int key;  //삽입 값을 임시로 저장할 변수
    for (int i = 1; i < n; i++) 
    {
        key = arr[i]; // 현재 정렬하려는 값을 저장
        int j = i - 1; // key 바로 앞 위치부터 비교 시작

        while (j >= 0 && arr[j] > key)  //j가 배열의 처음보다 크거나 같고 현재 arr[j]값이 key 보다 크다면
        {
            arr[j + 1] = arr[j];        // 큰값을 오른쪽으로 한칸 이동
            j--;        // 한칸 더 왼쪽으로 이동해서 비교   
        }

        arr[j + 1] = key;  // 빈자리에 key  를 넣음
    }
}
int main(){
    int arr[]={9,6,8,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("초기 상태 배열: [");
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);   
    }
    printf("]\n");

    InSortAscending(arr,n);

    printf("정렬된 배열: [");
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);  
    }
    printf("]\n");
    
    return 0;

}