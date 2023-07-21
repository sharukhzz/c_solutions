#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[6]={3,2,5,1,0,4};
    int flag=0;
    int min=a[5];
    for(int i=5;i<0;i++)
    {
    if(min < a[i])
    {
        flag=1;
    }
    if(flag==1)
    {
        int temp=a[i];
        a[i]=min;
        min=temp;
        //min=temp;
       // min=a[i];
    }
    }
    for(int i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }
}
