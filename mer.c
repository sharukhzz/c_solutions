#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
}*head,*temp,*new,*temp1;
struct node2
{
    int data2;
    struct node2*next;
}*head2,*temp2,*new2,*temp3;
int main()
{
int n;
scanf("%d",&n);
while(n-->0)
{
new=(struct node*)malloc(sizeof(struct node));
scanf("%d",&new->data);
new->next=NULL;
if(head==NULL)
{
head=new;
temp=new;
}
else
{
temp->next=new;
temp=new;
}
}
temp1=head;
while(temp1!=NULL)
    {
        printf("%d ",temp1->data);
        temp1=temp1->next;
    }
int n2;
scanf("%d",&n2);
while(n2-->0)
{
new2=(struct node2*)malloc(sizeof(struct node2));
scanf("%d",&new2->data2);
new2->next=NULL;
if(head2==NULL)
{
head2=new2;
temp2=new2;
}
else
{
temp2->next=new2;
temp2=new2;
}
}
temp3=head2;
while(temp3!=NULL)
    {
        printf("%d ",temp3->data2);
        temp3=temp3->next;
    }
printf("\n");
int n3=n+n2;
temp1=head;
temp2=head2;
while(temp2!=NULL)
{
    if(temp1->data<temp2->data2)
    {
        printf("%d ",temp1->data);
        printf("%d ",temp2->data2);
    }
    else
    {
        printf("%d ",temp2->data2);
        printf("%d ",temp1->data);
    }
    temp1=temp1->next;
    temp2=temp2->next;
}
}
