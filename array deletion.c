#include<stdio.h>
int main()
{
    int a[4]={1,2,3,4},i,position,element;
    printf("enter the elements to be deleted:");
    scanf("%d",&element);
    printf("enter the position:",position);
    scanf("%d",&position);
    for(i=position;i<4;i++)
    {
        a[i]=a[i+1];
    }
    printf("array after insertion:");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
}
