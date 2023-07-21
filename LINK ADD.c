#include<stdio.h>
struct node
{
    int data;
    struct node * next;
}*head,*new,*temp,*new2,*temp2,*head2;
void insert1()
{
    int value;
    printf("enter a value to insert:");
    scanf("%d",&value);
    new=(struct node*)malloc(sizeof(struct node));
    new->data=value;
    new->next=NULL;
    if(head==NULL)
    {
        head=temp=new;
    }
    else
    {
        new=temp->next;
        temp=new;
    }
    printf("\n INSERTED \n");
}
void insert2()
{
    int value2;
    printf("enter a value to insert:");
    scanf("%d",&value2);
    new2=(struct node*)malloc(sizeof(struct node));
    new2->data=value2;
    new2->next=NULL;
    if(head2==NULL)
    {
        head2=temp2=new2;
    }
    else
    {
        new2=temp2->next;
        temp2=new2;
    }
    printf("\n INSERTED \n");
}
void add()
{
    int var;


}

int main()
{
    int c;
    printf("\n1.insert 1 \n2.insert2");
    while(1)
    {
       printf("\nenter the choice:",c);
       scanf("%d",&c);
    switch(c)
    {
        case 1:insert1();
                break;
        case 2:insert2();
                break;
    }
    }
}
