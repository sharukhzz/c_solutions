#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node * next;
}*top=NULL,*newnode,*temp;
struct node1
{
    int data1;
    struct node * next;
}*top1=NULL,*temp1;
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
    if(top == NULL)
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
void reversepop()
{
    temp=top;
    temp->next==NULL;
   printf("%d",temp->data);
    top=top->next;
}
void display()
{
    temp=top;
    while(top != NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
int main()
{
    while(1)
    {
        int choice;
        printf("enter the choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : insert();
                     break;
            case 2 : reversepop();
                     break;
            case 3 : display();
                     break;
        }
    }
}
