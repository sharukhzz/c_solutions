#include<stdio.h>
struct node
{
    int value;
    struct node*next;
}*head;
void insertion_last();
void insertion_last_at_front();
void insertion_last(int element)
{
    struct node*temp,*new;
    new=(struct node*)malloc(sizeof(struct node));
    new->value=element;
    new->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new;
}
void insertion_last_at_front()
{
    struct node*temp,*temp_prev;
    while(temp->next!=NULL)
    {
        temp_prev=temp;
        temp=temp->next;
    }
    temp_prev->next=NULL;
    head=temp;
    temp->next=head;
}
int main()
{

   int choice,a,b;
    while(1)
{
    printf("\n linked list");
    printf("\n1.insert last\n2.insertion_last_at_front");
    printf("\nEnter the choice:");
    scanf("%d",&choice);
switch(choice)
{
    case 1: insertion_last(a);
            break;
}
}
}

