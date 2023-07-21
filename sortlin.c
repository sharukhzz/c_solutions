#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*temp,*newnode,*head,*temp1,*temp2;
void insert()
{
    int n;
    printf("how many to enter : ");
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
void sort()
{
    temp1=head;
    temp2=temp1->next;
    while(temp2!=NULL)
    {
    if(temp1->data > temp2->data)
    {
        temp=temp1->data;
        temp1->data=temp2->data;
        temp2->data=temp;
        temp1=head;
        temp2=temp1->next;
    }
    else
    {
        temp1=temp1->next;
        temp2=temp2->next;
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
void dispnum()
{
    printf("enter the nth smallest number to display : ");
    int n;
    scanf("%d",&n);
    n--;
    temp=head;
    while(n--)
    {
        temp=temp->next;
    }
    printf("%d",temp->data);
}
int main()
{
    while(1)
    {
        int choice;
        printf("\n1.insert\n2.sort\n3.display\n4.dispnum");
        printf("\nenter the choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insert();
                    break;
            case 2:sort();
                    break;
            case 3:display();
                    break;
            case 4:dispnum();
                    break;
        }
    }
}
