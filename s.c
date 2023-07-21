#include<stdio.h>
int main()
{
    int a[5];
    int b[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=0;j<5;j++)
    {
        scanf("%d",&b[j]);
    }
    int x;
    scanf("%d",&x);
    for(int i=0;i<5;i++)
    {
    for(int j=0;j<5;j++)
    {
        if(a[i]+b[j]==x)
        {
            printf("%d %d\n",a[i],b[j]);
        }
    }
    }
}
