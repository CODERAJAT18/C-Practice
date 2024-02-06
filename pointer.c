#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr = (int*)malloc(sizeof(int)*10);
    int var = 10;
    ptr = &var;
    int i=1;
    printf("%d\n",*ptr);
    // free(ptr);
    return 0;
}