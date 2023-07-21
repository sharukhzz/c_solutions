#include<stdio.h>
int main()
{
    int a[50],pos=2,ele=60,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>pos;i--)
    {
        a[i]=a[i-1];
    }
a[pos-1]=ele;
print("the order of the array:%d");
}
