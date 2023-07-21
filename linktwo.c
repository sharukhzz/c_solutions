#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*temp,*head,*newnode;
struct node1
{
    int data
};
int main()
{
    int n;
    printf("how many data to enter : ");
    scanf("%d",&n);
    while(n-->0)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
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
    int c;
    c=n/2+1;
    temp=head;
    for(int i=0;i<c;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode=temp;
        printf("%d",newnode->data);
        temp=temp->next;
    }
    for(int i=c;i<n;i++)
    {
        temp=temp->data;
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode=temp;
        printf("%d",newnode->data);
        temp=temp->next;
    }
}
