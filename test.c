#include<stdio.h>



int main()
{
    int arr[16] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int arrlen=16,i;
    int arrlen2=arrlen-1;
    for(i=0;i<arrlen/2;i++)
    {
        arr[i]=arr[i]^arr[arrlen2];
        arr[arrlen2]=arr[i]^arr[arrlen2];
        arr[i]=arr[i]^arr[arrlen2];
        arrlen2--;
    }
    for(i=0;i<16;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}