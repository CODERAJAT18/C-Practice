#include<stdio.h>

int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

int main()
{
    int num1=0,num2=0,sum=0,diff=0;
    int (*add_p)(int,int);
    int (*sub_p)(int,int);
    printf("Enter Two Numbers: ");
    scanf("%d%d",&num1,&num2);
    add_p=add;
    sub_p=sub;
    sum = (*add_p)(num1,num2);
    diff = (*sub_p)(num1,num2);
    printf("Add= %d\n",sum);
    printf("Sub= %d\n",diff);
    return 0;
}