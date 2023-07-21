#include<stdio.h>
int main()
{
    int a[5],i,count=0;
    printf("enter the array:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]<0)
        {
            printf("%d",a[i]);
            count++;
    }
}
printf("\n the count is:%d",count);
}
