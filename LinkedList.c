#include<stdio.h>
#include<stdlib.h>


struct Node
{
    int data;
    struct Node *next;
};

struct Node* InsertAtBeg(struct Node *head,int NewData)
{
    struct Node *New_Node=(struct Node*)malloc(sizeof(struct Node));
    New_Node->next=head;
    New_Node->data=NewData;
    return New_Node;

}
void InsertAtPos(struct Node *head,int NewData,int pos)
{
    struct Node *New_Node=(struct Node*)malloc(sizeof(struct Node));
    struct Node *pointer = head;
    int i =1;
    while(i!=pos)
    {
        pointer=pointer->next;
        i++;
    }
    New_Node->data=NewData;
    New_Node->next = pointer->next;
    pointer->next=New_Node;    
}
void traverse(struct Node *head)
{
    while(head!=NULL)
    {
        printf("Element = %d \n",head->data);
        head = head->next;
    }
}
struct Node* deletefirst(struct Node *head)
{
    struct Node *pointer=head;
    head=head->next;
    free(pointer);
    return head;
}
void deleteAtPos(struct Node *head,int pos)
{
    struct Node *pointer1=head->next;
    struct Node *pointer2=head;
    for(int i=0;i<pos-1;i++)
    {
        pointer2=pointer2->next;
        pointer1=pointer1->next;
    }
    pointer2->next=pointer1->next;
    free(pointer1);
}
void deleteValue(struct Node *head,int data)
{
    struct Node *pointer1=head->next;
    struct Node *pointer2=head;
    while(pointer1->data!=data)
    {
        pointer2=pointer2->next;
        pointer1=pointer1->next;
    }
    pointer2->next=pointer1->next;
    free(pointer1);
}
int main()
{
    struct Node *head,*second,*third,*fourth;
    
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data=8;
    head->next=second;

    second->data=7;
    second->next=third;

    third->data=6;
    third->next=fourth;

    fourth->data=5;
    fourth->next=NULL;
    traverse(head);
    deleteValue(head,5);

    printf("\n");
    traverse(head);
    return 0;
}