#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next
}*top=NULL,*newnode,*temp;
void insert()
{
    int n;
    printf("how many data to enter : ");
    scanf("%d",&n);
    while(n-->0)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data : ");
        scanf("%d",&newnode->data);
        if(top==NULL)
        {
            top=newnode;
            newnode->next=NULL;
        }
        else
        {
            newnode->next=top;
            top=newnode;
        }
    }
}
void pop()
{
    temp=top;
    printf("%d ",top->data);
    top=top->next;
    temp=temp->next;
}
void peek()
{
    printf("%d ",top->data);
}
void display()
{
    temp=top;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    while(1)
    {
        int choice;
        printf("\n1.insert\n2.pop\n3.peek\n4.display");
        printf("\n enter the choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insert();
                   break;
            case 2:pop();
                   break;
            case 3:peek();
                   break;
            case 4:display();
                    break;
        }
    }
}
