#include<stdio.h>
#include<stdlib.h>
#define max 5
    int a,b,c,d,queue[max],ch,front=-1,ele,rear=-1,i,front1=-1,rear1=-1,queue1[max],end=5;
 void enqueue()
    {   //int ;
        if(front=-1 || front!=max)
        {
            front=0;
            rear++;
            printf("\nEnter value to add:");
            scanf("%d",&ele);
            queue[rear]=ele;
        }
        else if(rear==max-1)
        {
            printf("\nfull");
        }
        }
         void dequeue()
    {   //int front;
        if(front!=-1)
        {
        printf("\nConverted from stack to queue:%d",queue[front]);
        front++;
        rear1=0;
        front1++;
        queue1[rear1]=queue[front];
        queue1[end]=queue1[rear1];
        end--;
        }

    else if(front1=-1)
    {
        printf("\nThe Stack is empty");
    }
    }
     void disp()
    {   //int front,rear,i;
        if(front1!=-1)
        for(i=front1;i<end;i++)
        {
        printf("\n%d",queue1[i]);
    }
    }

int main()
{   for(;;)
    //int a,b,c,d,queue[max],ch;
    {
    printf("\n1.Add element to Queue");
    printf("\n2.Convert each element from Queue to Stack");
    printf("\n3.Display Stack::");
    scanf("\n%d",&ch);

    switch(ch)
    {
        case 1:
        { enqueue();
        break;}
        case 2:
        { dequeue();
        break;}
        case 3:
        { disp();
        break;}
    }
    }
    return 0;
}
