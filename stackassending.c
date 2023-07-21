#include<stdio.h>
#include<stdlib.h>
#define size 5
int stack[size];
int tem[size];
int top=-1;
void push()
{
    int n;
    printf("how many data to enter");
    scanf("%d",&n);
    while(n-->0)
    {
    if(top> size)
    {
        printf("the stack is full");
    }
    else
    {
        int x;
        scanf("%d",&x);
        top=top+1;
        stack[top]=x;
    }
    }
}
void pop()
{
    if(top==-1)
    {
        printf("the stack is empty");
    }
    else
    {
        printf("%d",stack[top]);
        top--;
    }
}
void display()
{
    int temp=top;
    while(temp != -1)
    {
        printf("%d",stack[temp]);
        temp--;
    }
}
int main()
{
    while(1)
    {
    printf("\n1.push\n2.pop\n3.display");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:push();
               break;
        case 2:pop();
              break;
        case 3:display();
                break;
    }
}
}
