#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next,*prev;
}*newnode,*head,*tail,*temp1,*temp2,*temp3;
int main()
{
    int n;
    printf("how many data to inserted :");
    scanf("%d",&n);
    while(n-->0)
    {
    newnode=(struct node*)malloc(sizeof (struct node));
    printf("enter the data : ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
    }
    temp1=head;
    temp2=tail;
    int a;
    for(int i=0;i<n/2;i++)
    {
        a=temp1->data;
        temp1->data=temp2->data;
        temp2->data=a;
        temp1=temp1->next;
        temp2=temp2->prev;
    }
    temp3=head;
    for(int i=0;i<n;i++)
    {
        printf("%d",temp3->data);
        temp3=temp3->next;
    }
}
