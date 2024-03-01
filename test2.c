#include<stdio.h>
#include<stdint.h> 
#include"StringLib.c"

int main() 
{ 
	char str[]="RAJAT";
	StrReverse(str);

	printf("%s",str);
	return 0; 
}