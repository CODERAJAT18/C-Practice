#include<stdio.h> 
#include"StringLib.c"
int main() 
{ 
	char string1[]="I AM RAJAT RAJ";
    char string2[]="RAJ";
    if(StrFindStr(string1,string2))
    {
        printf("Word Found");
    }
    else
    {
        printf("Word Not Found");
    }
	return 0; 
}