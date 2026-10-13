#include <stdio.h>

void printvValue(void*ptr,char type){
    switch (type)
    {
    case 'i':
         printf("%d\n", *(int*)ptr);
        break;
    case 'f':
         printf("%f\n", *(float*)ptr);
        break;
    case 'c':
         printf("%c\n", *(char*)ptr);
        break;

    }
}

int main(){

    int i=23;
    float f=4.5;
    char c='z';

    printvValue(&i,'i');
    printvValue(&f,'f');
    printvValue(&c,'c');

    return 0;
    
}