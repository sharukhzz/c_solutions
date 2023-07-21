#include<stdio.h>
int main()
{
    int n,mod,count=0;
    printf("enter the number:",n);
    scanf("%d",&n);
    while(n>0)
    {
        mod=n%10;
        count++;
        if(count%2!=0)
        {
            printf("%d\n",mod);
        }
        n=n/10;
    }
}
