#include<stdio.h>
int main()
{
   return fib(4);
}
int fib(int n)
{
      int sum;
        int a[n];
        if(a[n] !='-1')
            return a[n];
        else if(n==0)
            return 0;
        else if(n==1)
            return 1;
        else
        {
            for(int i=2;i<n;i++)
            {
            a[i]=fib(n-1)+fib(n-2);
            }
        }
       printf("%d",a[n]);
}
