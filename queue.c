#include<stdio.h>
# define size 5
void enqueue(int);
void dequeue();
void display();

    int items[size],front=-1;rear=-1;
    int main()
{
    dequeue();
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    display();
    dequeue();
    display();
    return 0;
}
void enqueue(int value)
{
    if(rear==size-1)
        printf("\n queue is full");
    else
    {
        if(front==-1)
            front=0;
        rear++;
        scanf("%d",&value);
        items[rear]=value;
        printf("\n Inserted=%d",value);
    }
}
void dequeue()
{
    if(front==-1)
    {
        printf("\n queue is empty");
    }
    front++;
    if(front>rear)
    {
        front=rear=-1;
    }
}
void display()
{
    if(rear==-1)
    {
        printf("queue is empty");
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            printf("%d",&items[i]);
        }
    }
printf("\n");}
