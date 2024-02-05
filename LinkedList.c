#include<stdio.h>
#include<stdlib.h>


struct Node
{
    int data;
    struct Node *next;
};

void traverse(struct Node *head)
{
    while(head!=NULL)
    {
        printf("Element = %d \n",head->data);
        head = head->next;
    }
}


int main()
{
    struct Node *head,*second,*third;
    
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data=8;
    head->next=second;

    second->data=7;
    second->next=third;

    third->data=6;
    third->next=NULL;

    traverse(head);
    return 0;
}