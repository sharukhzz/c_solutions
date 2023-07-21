#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
}*newnode,*temp,*head,*tail;
void insert()
{
    int n;
    printf("how many datas to enter : ");
    scanf("%d",&n);
    while(n-->0)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data : ");
        scanf("%d",&newnode->data);
        newnode->next=head;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
            temp=head;
        }
        else
        {
            temp->next=newnode;
            newnode->next=head;
            temp=newnode;
        }
    }
}
void display()
{
    temp=head;
    while(temp->next != head)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d ",temp->data);
}
/*void insertfirst()
{
    int n;
    printf("how many datas to enter : ");
    scanf("%d",&n);
    while(n-->0)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data : ");
        scanf("%d",&newnode->data);
        temp=head;

        head=newnode;


}*/
int main()
{
    while(1)
    {
        int choice;
        printf("\n1.insert\n2.display\n3.insertfirst");
        printf("enter the choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : insert();
                     break;
            case 2 : display();
                     break;
           /* case 3 : insertfirst();
                     break;*/
        }
    }
}
