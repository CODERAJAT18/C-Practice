#include<stdio.h>

int strlength(char str[])
{
    int length =0;
    for(int i=0;str[i]!= '\0';i++)
    {
        length++;
    }
    return length;
}
int main()
{
    char str[100];
    int i, length=0;

    //User Input
    printf("Enter a string: \n");
    scanf("%s",str);
    length = strlength(str);
    printf("Length of input string = %d",length);
    return 0;
}
