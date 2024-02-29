#include<stdio.h>
#include<stdlib.h>


int search(int arr[][3],int num)
{
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            if(arr[i][j]==num)
            printf("Element found");
        }
    }
    if(i==2&&j==3)
    {
        printf("Element Not Found");
    }
    return 0;
}

int search2(int arr[][3],int num)
{
    for(int i=0;i<6;i++)
    {
        if((**arr+i)==num)
        {
            printf("Element found");
        }
    }
}

int main()
{
    int arr[2][3]={{1,2,3},{4,5,6}};
    search2(arr,2);
    // printf("%d",**(arr)+1);
}