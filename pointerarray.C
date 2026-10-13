#include <stdio.h>


#define MAX_SIZE 10

int main()
{
    int ary[] = {1,2,3,4,5,6,7,8,9,10};
    int*TStart;
    int*TEnd;

    printf("Array forward: ");
    for (TStart=ary, TEnd=ary+MAX_SIZE; TStart<TEnd; TStart++)
    {
        printf("%3d",*TStart);
    }
    printf("\n");

    printf("Array backward: ");
    for (TStart=TEnd-1; TStart >= ary; TStart--)
    {
        printf("%3d",*TStart);
    }

    printf("\n");


int arr[3] = {10,20,30};
int*p = arr;
printf("%d\n",sizeof(arr));
printf("%d\n",sizeof(p));

p++;

return 0;

}