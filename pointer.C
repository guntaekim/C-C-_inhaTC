#include <stdio.h>

int main(){
    int num=50;
    int*pnum;

    pnum=&num;

    printf("$%d\n",*(pnum));
    printf("$%d\n",(*pnum)++);
    printf("$%d\n",(*pnum)+1);
    printf("$%d\n",*pnum+=1);
    printf("$%d\n",*pnum=*pnum+1);
    printf("$%d\n",++*pnum);
    printf("$%d\n",*(++pnum));

    return 0;
}