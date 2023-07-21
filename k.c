#include<stdio.h>
int main()
{
int i,j,temp,n;
scanf("%d",&n);
int a[n];
int k;
scanf("%d",&k);
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{
   for(int j=i+1;j<n;j++)
   {
       if(a[i]>a[j])
       {
           temp=a[i];
           a[i]=a[j];
           a[j]=temp;
       }
   }
}
printf("%d",a[k-1]);
}
