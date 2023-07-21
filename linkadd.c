#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
}*newnode,*temp,*head;
struct node1
{
    int data1;
    struct node * next1;
}*newnode1,*temp1,*head1;
int main()
{
    int n;
    printf("how many data : ");
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
    temp=head;
    int x=0;
    while(temp != NULL)
    {
        x=x*10+temp->data;
        temp=temp->next;
    }
    int n1;
    printf("how many data in node 2 : ");
    scanf("%d",&n1);
    while(n1-->0)
    {
    newnode1=(struct node*)malloc(sizeof(struct node));
    printf("enter the data : ");
    scanf("%d",&newnode1->data1);
    newnode1->next1=NULL;
    if(head1==NULL)
    {
        head1=newnode1;
        temp1=head1;
    }
    else
    {
        temp1->next1=newnode1;
        temp1=temp1->next1;
    }
    }
    temp1=head1;
    int y=0;
    while(temp1 != NULL)
    {
        y=y*10+temp1->data1;
        temp1=temp1->next1;
    }
    printf("%d ",x-y);
}
