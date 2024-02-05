#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char sen[100];
    printf("Enter a sentence: ");
    fgets(sen,100,stdin);
    printf("Output: %s",sen);
    return 0;
}