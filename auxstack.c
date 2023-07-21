#include<stdlib.h>
#include<stdio.h>
int main()
{
    int n;
    printf("how many data to enter : ");
    scanf("%d",&n);
    int a[n];
    int a2[n];
    int top=-1;
    int top1=-1;
    for(int i=0;i<n;i++)
    {
        top++;
        scanf("%d",&a[top]);
    }
    if(top>n-1)
    {
        printf("OVERFLOW");
    }
    else
    {
        top++;
        a[top]=n;
    }
    a[top]=0;
    if(a[top] > a[top++])
    {
        temp=a[top];
        a[top]=a[top++];
        a[top++]=temp;
    }

}
