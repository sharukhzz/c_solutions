#include<stdio.h>
int main()
{
    int n=3;
    printf("%d",fun(n));
    return 0;
}
int fun(int n)
{
    for(int i=0;i<n;i++)
    {
    if(n==1)
    {
        return 1;
    }
    {
         return 1+fun(n-1);
         break;
    }
    }
}
