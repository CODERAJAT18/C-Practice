#include<stdio.h>

int A[50],i,j,count=0,size,temp;

int main()
{
	printf("Enter Size Of Array: ");
	scanf("%d",&size);
	printf("Enter Elements");
	for(i=0;i<size;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<size;i++)
	{
		count = 0;
		temp = A[i];
		if(temp>0)
		{
			for(j=0;j<size;j++)
			{
				if(temp
				==A[j])
				{
					count++;
					A[j] = 0;
				}
			}
		}
		if(count>1)
		{
			printf("\n%d appeared %d times",temp,count);
		}
	}
}
