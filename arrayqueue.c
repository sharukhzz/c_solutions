#include<stdio.h>
#include<stdlib.h>
#define size 5
int front=-1;
int rear=-1;
int queue[size];
void enqueue()
{
    int n;
    printf("enter the size : ");
    scanf("%d",&n);
    while(n-->0)
    {
    int data;
    scanf("%d",&data);
    if(front == -1)
    {
        front=rear=0;
        queue[rear]=data;
    }
    else
    {
        rear++;
        queue[rear]=data;
    }
    }
}
void dequeue()
{
    front++;
}
void display()
{
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
}
int main()
{
    int choice;
    while(1)
    {
    printf("\n1.enqueue\n2.dequeue\n3.display");
    printf("\nenter the choice : ");
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
