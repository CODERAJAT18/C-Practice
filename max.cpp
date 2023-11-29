#include<stdio.h>

int main()
{
	int A[5] = {1,9,3,7,13};
	int i,max=0,count=0,j;
	
	for(i=0;i<5;i++)
	{
		if(A[i]>max)
		{
			max = A[i];
		}
	}
	
	printf("%d",max);
	
	for(i=1;i<max;i++)
	{
		count = 0;
		for(j=0;j<5;j++)
		{
			
			if(i==A[j])
			{
				count++;
			}
		}
		if(count == 0)
		{
			printf("%d",i);
			break;
		}
	}
}
