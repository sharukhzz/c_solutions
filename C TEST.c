#include<stdio.h>
int main()
{
    int N=7,a[10]={12,1,2,3,0,11,4},count;
     for(int i=0;i<7;i++)
    {
        count=0;
        for(int j=i+1;j<7;j++)
        {
    if(a[i]>a[j])
        {
            count++;
        }
        }
         printf("%d",count);
    }
}

