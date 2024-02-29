#include<stdio.h>

#define size 5

int array[size], element = 0;

void Array_Initialization()
{
    int i = 0;
    for(i=0;i<size;i++)
    {
        array[i] = -1;
    }
}

void Array_Insert(int element)
{
    int key = element % size;

    insert: if(array[key] == -1)
    {
        array[key] = element;
        printf("%d inserted at array[%d]\n",element,key);
    }
    else
    {
        key = key+1;
        if(key>=size)
        {
            key = 0;
        }
        else
        {
            goto insert;
        }
    }
}

void Array_Search(int element)
{
    int key = element % size;
    Search: if(array[key] == element)
    {
        printf("Element Found\n");
    }
    else
    {
        if (key < size)
        {
            key++;
            goto Search;
        }
        else
        {
            printf("Element Not Found\n");
        }
    }
}
void Array_Delete(int element)
{
    int key = element % size;
    Delete: if(array[key] == element)
    {
        array[key] = -1;
        printf("Element at position %d is Deleted",key);
    }
    else
    {
        if (key < size)
        {
            key++;
            goto Delete;
        }
        else
        {
            printf("Element Not Found");
        }
    }
}
int main ()
{
    int i = 0;
    Array_Initialization();
    for(i=0;i<size;i++)
    {
        printf("Enter Elemnt: ");
        scanf("%d",&element);
        Array_Insert(element);
    }

    printf("Enter Element To Search:");
    scanf("%d",&element);
    Array_Search(element);

    printf("Enter Element To Delete:");
    scanf("%d",&element);
    Array_Delete(element);

}