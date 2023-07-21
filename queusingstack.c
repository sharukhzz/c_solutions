#include<stdio.h>
#include<stdlib.h>
#define size 5
int stack1[size];
int stack2[size];
int top1=-1;
int top2=-1;
    int n;
void enqueue()
{
    printf("how many data to enter : ");
    scanf("%d",&n);
    while(n-->0)
    {
        int x;
        if(top1 >= size-1)
        {
            printf("queue is full");
        }
        else
        {
            scanf("%d",&x);
            stack1[top1++]=x;
        }
    }
}
void dequeue()
{
    if(top1==-1 && top2==-1)
    {
        printf("queue is empty");
    }
    if(top2 == -1)
    {
        while(top2 != -1)
        {
            stack2[top2++]=stack1[top1--];
            //stack2[top]=x;
        }
    }
   // int x=stack2[top2--];
    //printf("%d",x);
}
void display()
{
    for(int i=0;i<n;i++)
    {
        printf("%d",stack2[i]);
    }
}
int main()
{
    while(1)
    {
    int choice;
    printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit");
    printf("enter the choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:enqueue();
                break;
        case 2:dequeue();
                break;
        case 3:display();
                break;
        case 4:exit(1);
    }

}
}
