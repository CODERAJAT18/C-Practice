#include<stdio.h>

void input_nums();
void check_duplicate();

int nums[5],count=0,i=0,j=0;

int main()
{
   printf("Enter Array Elements: ");
   input_nums();
   check_duplicate();
}

void input_nums()
{
    for(i=0;i<5;i++)
    {
        scanf("%d",&nums[i]);
    }
}

void check_duplicate()
{
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(nums[i]== nums[j])
            {
                count++;
                //printf("%d ", nums[i]);
                break;
            }
        }
    }
    if(count>1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}