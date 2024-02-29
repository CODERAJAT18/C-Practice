#include<stdio.h>

void Insert_Array_Element(int size);
int Delete_Array_Element();
int Print_Array_Element(int size);
int Reverse_Array_Element(int size);

	int n,i,position;
	int A[10] = {0};

int main()
{
	n=10;
	Insert_Array_Element(n);
	Reverse_Array_Element(n);	
	Print_Array_Element(n);
}
void Insert_Array_Element(int size)
{
	printf("Enter %d Elements: ",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&A[i]);
	}
}
int Delete_Array_Element()
{
	printf("\nEnter The Position Of Element To Delete: \n");
	scanf("%d",&position);
	for(i=position;i<n-1;i++)
	{
		A[i]=A[i+1];
	}
	
}
int Print_Array_Element(int size)
{
	for(i=0;i<size;i++)
	{
		printf("%d",A[i]);
	}
}
int Reverse_Array_Element(int size)
{
	int temp,j=1;
	for(i=0;i<(size/2);i++)
	{
		temp = A[i];
		A[i] = A[size-j];
		A[size-j] = temp;
		j++;	 
	}
}












