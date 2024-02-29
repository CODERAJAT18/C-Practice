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
void strreverse(char str[])
{
    int len,len2,i,temp;
    len = strlength(str);
    len2= len-1;
    for(i=0;i<len/2;i++)
    {
        str[i] = str[i]^str[len2];
        str[len2]=str[i]^str[len2];
        str[i]=str[i]^str[len2];
        len2--;

        // temp = str[i];
        // str[i] = str[len2];
        // str[len2--]= temp;
    }

}
int main()
{
    char str[50];
    printf("Enter String: \n");
    scanf("%s",str);
    strreverse(str);
    printf("Reversed string = %s",str);
}