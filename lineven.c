#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
}*newnode,*temp,*head;
void insert()
{
    int n;
    printf("enter the datas to insert : ");
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
    while(temp != NULL)
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
        }
    }
}
