#include<stdio.h>
int main()
{
    int a[10],n,sum=0;
    scanf("\n%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i+=1)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
}
