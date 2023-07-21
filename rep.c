#include<stdio.h>
int main()
{
int n;
int count=0;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
int b[n];
for(int j=0;j<n;j++)
{
    scanf("%d",&b[j]);
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(a[i]==b[j])
        {
            count++;
            b[j]==NULL;
            break;
        }
    }
}
if(count==5)
{
    printf("1");
}
else
{
    printf("0");
}
}
