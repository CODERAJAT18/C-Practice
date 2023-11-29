#include <stdio.h>

int A[50],i,l1,l2,size,value;

int largest_2nd(int size);

int main()
{
	size = 6;
	printf("Enter %d Elements: ",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&A[i]);
	}
	value = largest_2nd(size);
	printf("%d",value);
	
}
int largest_2nd(int size)
{
	for(i=0;i<size;i++)
	{
		if(A[i]>l1)
		{
			l2=l1;
			l1=A[i];
			 
		}
		else if(A[i]>l2 && A[i]<l1)
		{
			l2 = A[i];
		}
	}
	return l2;
}


