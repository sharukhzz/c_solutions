#include<stdio.h>
struct node
{
    int value;
    struct node * next;
}* head ;
void insert_first(int element)
{   struct node * new;
    new=(struct node*)malloc(sizeof(struct node));
    new->value=element;
    new->next=NULL;
    new->next=head;
    head=new;
}
void insert_middle(int element)
{
    struct node * new;
    new=(struct node*)malloc(sizeof(struct node));
    new->value=element;
    new->next=NULL;
    struct node*prev=head,*prev_next;
    while(prev->value!=head)
    {
        prev=prev->next;
    }
    new->next=prev->next;
    prev->next=new;
}
void insert_last(int K)
{
    struct node * new;
    struct node * temp;
if (head==NULL)
{
    new->next=NULL;
    head=new;
    printf("\n node inserted");
    temp=head;
    while(temp->next!=NULL)
     temp=temp->next;
     count++;
     if(new>K)
     {
         new->next=head;
         head=new;
     }
}
}
void display()
{
    struct node * temp;
    if(head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            printf("%d",temp->value);
            temp=temp->next;
        }
    }
}

int main()
{

   int choice,a,b,K;
    while(1)
{
    scanf("%d",&K);
    printf("K=%d",K);
    printf("\n linked list");
    printf("\n1.insert first\n2.insert middle\n3.insert last\n4.display");
    printf("\nenter the choice:");
    scanf("%d",&choice);

switch(choice)
{
    case 1: scanf("%d",&a);
            insert_first(a);
            break;
    case 2: insert_middle(a);
            break;
    case 3: insert_last(a);
            break;
    case 4: display();
            break;
    case 5: exit(1);

}
}
}


