#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*temp,*head,*newnode;
int n;
void insert()
{
    printf("how many data to enter : ");
    scanf("%d",&n);
    while(n-->0)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data : ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        temp=head;
    }
    else
    {
        temp->next=newnode;
        temp=temp->next;
    }
    }
}
void display()
{
    temp=head;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void remove()
{
    int count=2;
    temp=head;
    head=head->next;
    temp->next=NULL;
    if(count%2 != 0)
    {
        temp->next=
    }

}
int main()
{
    while(1)
    {
    int choice;
    printf("\n1.insert\n2.display");
    printf("\nenter the choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 : insert();
                  break;
        case 2 : display();
                  break;
        case 3 : remove();
                break;
    }
    }

}
