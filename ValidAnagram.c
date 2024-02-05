#include<stdio.h>
#include<string.h>

char str1[100],str2[100];
int i,strlen1=0,strlen2=0,count=0,j;

int main()
{
    printf("Enter string 1: \n");
    scanf("%s",str1);
    printf("Enter String 2: \n");
    scanf("%s",str2);
    strlen1 = strlen(str1);
    strlen2 = strlen(str2);

    for(i=0;i<strlen1;i++)
    {
        for(j=0;j<strlen2;j++)
        {
            if(str1[i]==str2[j])
            {
                count++;
            }
        }
        if(count==0)
        {
            printf("False");
            break;
        }
    }
    if (count != 0)
    {
        printf("True");
    }

}