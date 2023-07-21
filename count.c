#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int count,count1=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		count=a[i];
		count1++;
		while(count-->0)
		{
			i++;

		}
	}
	printf("%d",count1);
}
