//This source Code is a custom made library of string functions.
//Atuthor = Rajat Raj

#include<stdio.h>

// StrLength function should be used to get the length of the string.
int StrLength(char *str)
{
    int length =0;
    while(!*str=='\0')
    {
        length++;
        str++;
    }
    return length;
}

// StrFindStr Function should be used to find a string the given string.
int StrFindStr(char *str1, char *str2)
{
    int count =0;
    while(*str1!= '\0')
    {
        if(*str2==*str1)
        {
            count =0;
            for(int i=0;i<StrLength(str2);i++)
            {
                if(*(str2+i)==*(str1+i) && count<StrLength(str2))
                {
                    count++;
                }
            }
            if(count==StrLength(str2))
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    str1++;
    }
}
// StrReverse Function should be used to set the given string in reverse order.
void StrReverse(char *str)
{
    int len,len2,i,temp;
    len = StrLength(str);
    len2= len-1;
    for(i=0;i<len/2;i++)
    {
        *(str+i) = *(str+i)^*(str+len2);
        *(str+len2)=*(str+i)^*(str+len2);
        *(str+i)=*(str+i)^*(str+len2);
        len2--;
    }

}