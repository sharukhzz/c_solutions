#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *next,*prev;
}*newnode,*nextnode,*head,*temp,*tail;
void insert()
{
    int n;
    printf("how many data to inserted :");
    scanf("%d",&n);
    while(n-->0)
    {
    newnode=(struct node*)malloc(sizeof (struct node));
    printf("enter the data : ");
    int data;
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        temp=head;
    }
    else
    {
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
        tail=newnode;
    }
}
}
void insertfront()
{
    int n;
    printf("how many data to inserted :");
    scanf("%d",&n);
    while(n-->0)
    {
    newnode=(struct node*)malloc(sizeof (struct node));
    printf("enter the data : ");
    int data;
    scanf("%d",&newnode->data);
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
    }
}
void insertend()
{
    int n;
    printf("how many data to inserted :");
    scanf("%d",&n);
    while(n-->0)
    {
    newnode=(struct node*)malloc(sizeof (struct node));
    printf("enter the data : ");
    int data;
    scanf("%d",&newnode->data);
    tail->next=newnode;
    newnode->prev=tail;
    newnode->next=NULL;
    tail=newnode;
    }
}
void insertmiddile()
{
    int n;
    printf("how many data to inserted :");
    scanf("%d",&n);
    while(n-->0)
    {
    newnode=(struct node*)malloc(sizeof (struct node));
    printf("enter the data : ");
    int data;
    scanf("%d",&newnode->data);
    int pos;
    printf("enter the position to insert");
    scanf("%d",&pos);
    temp=head;
    for(int i=0;i<pos;i++)
    {
        temp=temp->next;
    }
    temp->prev->next=newnode;
    newnode->prev=temp->prev;
    newnode->next=temp;
    temp->prev=newnode;
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
void deletefront()
{
   temp=head;
    temp->next->prev=NULL;
    head=temp->next;
    free(temp);
}
void deletemiddile()
{
    int pos;
    printf("enter the position to delete : ");
    scanf("%d",&pos);
    temp=head;
    for(int i=0;i<pos;i++)
    {
        temp=temp->next;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
}
void deleteend()
{
    temp=tail->prev;
    temp->next=NULL;
    tail=temp;
}
int main()
{
    while(1)
    {
    printf("\n1.insert\n2.insertfront\n3.insertmiddile\n4.insertend\n5.deletefront\n6.deletemiddile\n7.deleteend\n8.display\n9.exit");
    int choice;
    printf("\nEnter the choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:insert();
                break;
        case 2:insertfront();
                break;
        case 3:insertmiddile();
                break;
        case 4:insertend();
                break;
        case 5:deletefront();
                break;
        case 6:deletemiddile();
                break;
        case 7:deleteend();
                break;
        case 8:display();
              break;
        case 9:exit(1);

    }

}
}
