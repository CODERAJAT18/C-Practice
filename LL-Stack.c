#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int isFUll(struct Node *top)
{
    struct Node *n;
    n=(struct Node*)malloc(sizeof(struct Node));
    if(n==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(struct Node *top)
{
    if(top==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *push(struct Node *top,int Ndata)
{
    if(isFUll(top))
    {
        printf("STACK OVERFLOW");
    }
    else
    {
        struct Node *n;
        n=(struct Node*)malloc(sizeof(struct Node));
        n->data = Ndata;
        n->next = top;
    }
};

int pop(struct Node **top)
{
    struct Node* n=*top;
    *top=(*top)->next;
    int x = n->data;
    free(n);
    return x;
}

void traverse(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Element = %d \n",ptr->data);
        ptr = ptr->next;
    }
}

int main ()
{
    struct Node *top =NULL;
    top = push(top,10);
    top = push(top,20);
    top = push(top,30);
    top = push(top,40);
    traverse(top);
    int popped=pop(&top);
    printf("Popped Element = %d\n",popped);
    traverse(top);
}
