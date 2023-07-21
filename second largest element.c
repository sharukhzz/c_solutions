#include<stdio.h>
int main()
{
    int i,a[4],max1,max2;
    printf("enter the array element:\n");
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    max1=max2=a[0];
    for(i=0;i<4;i-1)
    {
        if(max1<a[i])
        {
            max1=a[i];
        }
        else
        {
            if(max2>a[i] && max1>max2)
            max2=max1;
        }
    }
    printf("the second largest is :%d",max2);
    return 0;
}
