#include <stdio.h>

int main(){

    printf("1. Input\n");
    printf("2. Output\n");
    printf("3. Delete\n");
    printf("4. Finish\n");
    printf("Enter number: ");

    int i;
    scanf("%d",&i);
    if (i==1)
    {
        printf("you selected Input\n");
    }
    if (i==2)
    {
        printf("you selected Output\n");
    }
    if (i==3)
    {
        printf("you selected Delete\n");
    }
    if (i==4)
    {
        printf("you selected Finish\n");
    }

    else
    {
        printf("Wrong input.");
    }
    
    return 0;

    
}