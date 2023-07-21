#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*head,*new,*temp;
insert(int value)
{
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL)
    {
    printf("out of memory");
    }
    new->data=value;
    new->next=NULL;
    head=new;
    printf("\n node inserted\n");
}
void reverse()
{
    for(int i=temp;i<head;i--)
    {
        printf("%d",temp->data);
    }
}
int main()
{
    int choice,value;
    head=NULL;
    while(1)
    {
    printf("linked list");
    printf("\n1.insertion\n2.display\n3.exit");
    printf("\nenter the choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("\n enter the data:");
                scanf("%d",&value);
                insert(value);
                break;
        case 2:reverse();
                break;
        case 3:exit(0);
                break;
        default:printf("invalid choice");

    }
    }
}
