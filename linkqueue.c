#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*newnode,*front=NULL,*rear=NULL,*temp;
void enqueue()
{
    int n;
    printf("\nhow many data to enter : ");
    scanf("%d",&n);
    while(n-->0)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data : ");
        scanf("%d",&newnode->data);
        if(newnode->data > 0)
        {
        newnode->next=NULL;
        //front=rear=NULL;
        if(front == NULL)
        {
            front=newnode;
            rear=newnode;
        }
        else
        {
            rear->next=newnode;
            rear=newnode;
        }

    }
    else if(newnode->data < 0)
    {
        break;
    }
    }
}
void dequeue()
{
    front=front->next;
}

void display()
{
    temp=front;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

}
int main()
{
    while(1)
    {
        int choice;
        printf("\n1.enqueue \n2.dequeue\n3.display");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:enqueue();
                    break;
            case 2:dequeue();
                    break;
            case 3:display();
                    break;
        }
    }
}
