#include <stdio.h>

int number;
int BinaryArray[100],ArraySize=0;

int main()
{
	printf("Enter Number to Convert in Binary: ");
	scanf("%d",&number);
	Convert(number);
}
int Convert(int number)
{
	int i,r;
	
	for(i=0;number!=0;i++)
	{
		BinaryArray[i] = (number%2);
		number = number / 2;
	}
	ArraySize = i+1;
	Reverse_Array_Element(BinaryArray,ArraySize);
	for(i=1;i<ArraySize;i++)
	{
		printf("%d",BinaryArray[i]);
	}
}
int Reverse_Array_Element(int Array[100], int size)
{
	int temp,j=1,i;
	for(i=0;i<(size/2);i++)
	{
		temp = Array[i];
		Array[i] = Array[size-j];
		Array[size-j] = temp;
		j++;	 
	}
}
