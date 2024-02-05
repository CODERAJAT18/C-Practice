#include<stdio.h>

int strlength(char str[]) //Function for calculating string length.
{
    int i,length=0;
    for(i=0;str[i]!='\0';i++)
    {
        length++;
    }
    return length;
}
void AllCap(char str[]) //Function for Changing all charachters into CAPS.
{
    int i;
    for(i=0;i<strlength(str);i++)
    {
        if(97<=str[i] && str[i]<=122)
        {
            str[i] = str[i] - 32;
        }
    }
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s",&str);
    AllCap(str);
    printf("ALL CAP String = %s",str);
    getch();
    return 0;
}