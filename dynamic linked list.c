#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*ptr,sum=0;
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("elements are");
for(i=0;i<n;i++)
{
    scanf("%d",ptr+i);
    sum=sum+*(ptr+i);
}
printf("sum==%d",sum);
free(ptr);
}
