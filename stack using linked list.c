#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * link;
};
int main()
{
    struct node*top=NULL;
    top=push(top,5);
    top=push(top,6);
    top=push(top,7);
    top=push(top,8);
    top=pop(top);
    top=pop(top);
    top=pop(top);
    top=pop(top);
}
void push(element,top)
{
    struct node * temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=element;
    temp->link=top;
    top=temp;
    return top;
}
void view_stack(struct node *);
struct node*insert(struct node * top,int data)
{
    struct node * temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    top=temp;
    printf("%d is pushed\n",top->data);
    view_stack(top);
    return top;
}
struct node*pop(struct node* top)
{
    struct node * temp;
    temp=top;
    if(top==NULL)
    {
        printf("stack empty!nothing to pop\n");
        return;
    }
    top=top->link;
    printf("%d is popped\n",temp->data);
    free(temp);
    view_stack(top);
    return top;
}
void peek(struct node*top)
{
    if(top==NULL)
    {
        printf("stack empty\n");
    }
    else
    {
        printf("top item=%d",top->data);
    }
}
void view_stack(struct node * top)
{
    struct node * temp=top;
    printf("your current stack:\n");
    printf("\n");
    while(temp!=null)
    {
        printf("-----\n | %d I|\n-----\n",temp->data);
        temp=temp->link;
    }
}
