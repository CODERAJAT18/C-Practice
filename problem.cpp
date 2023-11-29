#include <stdio.h>
 
 
int dec,i,j,count=0,temp,mul=1,hexnum=0,size;
int BinArr[50] = {0};

int DEC_to_BIN(int dec);
int BIN_to_HEX(int Array[50],int size);
int Reverse_Array_Element(int Array[100], int size);


int main()
{
	printf("Enter Decimal Number: ");
	scanf("%d",&dec);
	DEC_to_BIN(dec);
	Reverse_Array_Element(BinArr,count);
	BIN_to_HEX(BinArr,count);
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
	//printf("\nreversed array =");
	/*for(i=0;i<count;i++)
	{
		printf("%d",BinArr[i]);
	}*/
}
int DEC_to_BIN(int dec)
{
	for(i=0;dec!=0;i++)
	{
		BinArr[i] = (dec % 2);
		dec = dec / 2;
		count++;
	}
	printf("\nBinary Number =");
	for(i=0;i<count;i++)
	{
		printf("%d",BinArr[i]);
	}
}
int BIN_to_HEX(int Array[50],int size)
{
	printf("\nHex Number =");
	if(size <5)
	{
		for(i=size-1;i>=0;i--)
		{
			hexnum = hexnum + (Array[i] * mul);
			mul = mul*2;
		}
		if(hexnum>9)
		{
			switch (hexnum)
			{
				case 10:
					printf("A");
					break;
				case 11:
					printf("B");
					break;
				case 12:
					printf("C");
					break;
				case 13:
					printf("D");
					break;
				case 14:
					printf("E");
					break;
				case 15:
					printf("F");
					break;
			}
		}
		else 
		{
			printf("%d",hexnum);
		}
	}
}
