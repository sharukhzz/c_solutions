#include<stdio.h>
#include<stdio.h>
struct node
{
int data;
struct node*next;
}*newnode,*head,*temp,*i,*j,*temp1;
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
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void deletefront()
{
    int value=head->data;
    temp=head;
    head=head->next;
    temp->next=NULL;
    printf("\nenter the element after deleted : ");
    temp=head;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\nelement not found : %d",value);

}
void sort()
{
    int temp;
    for(i=head;i<head->next!=NULL;i=i->next)
    {
    for(j=i->next;j!=NULL;j=j->next)
    {
        if(i->data > j->data)
        {
            temp=i->data;
            i->data=j->data;
            j->data=temp;
        }
    }
    }
    printf("\nsorted data : ");
    temp1=head;
    while(temp1 != NULL)
    {
        printf("%d ",temp1->data);
        temp1=temp1->next;
    }

}
int main()
{
    while(1)
    {
        int choice;
        printf("\n1.insert \n2.display \n3.deletefront\n4.sort");
        printf("\nenter the choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : insert();
                     break;
            case 2 : display();
                     break;
            case 3 : deletefront();
                     break;
            case 4 : sort();
                     break;
        }
    }

}
