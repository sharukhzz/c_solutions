#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size,top=-1;
    printf("enter the size : ");
    scanf("%d",&size);
    int a[size];
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
        a[top]=x;
    }
    }
    int mid=top/2;
    //printf("%d",mid);
    //top=-1;
    for(int i=mid;i<top;i++)
    {
        a[i]=a[i+1];
    }
    top--;
    int temp=top;
    while(temp != -1)
    {
        printf("%d ",a[temp]);
        temp--;
    }
}
