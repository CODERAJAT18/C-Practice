#include<stdio.h>

int main()
{
    int arr[5],target=0;
    int i,j;

    printf("Enter Array: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter Target: ");
    scanf("%d",&target);

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]+arr[j] == target)
            {
                printf("%d,%d\n",i,j);
            }
        }
    }

}