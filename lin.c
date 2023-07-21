#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
}*newnode,*head,*temp;
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
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

void insertfirst()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data : ");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}
void insertend()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data : ");
    scanf("%d",&newnode->data);
    temp->next=newnode;
    temp=newnode;
    temp->next=NULL;
}
/*void reverse()
{
   for()
    {
        printf("%d",temp->data);

    }
}*/
int main()
{
while(1)
{
int choice;
printf("1.insert\n2.display\n3.insertfirst\n4.insertend\n5.insertmiddile\n6.exit");
printf("\nenter the choice : ");
scanf("%d",&choice);
switch(choice)
{
    case 1:insert();
            break;
    case 2:display();
            break;
    case 3:insertfirst();
            break;
    case 4:insertend();
            break;
    case 5: exit(1);
}
}
}
