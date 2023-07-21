#include<stdio.h>
int main()
{
    int n,i,count,j,sum1=0,sum2=0,ans;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        count=0;
        for(j=1;j<=n;j++)
        {
            if(i%j==0)
            {
                count++;
                if(i%j==2)
                {
                count++;
                }
            }
               printf("%d",count);
        }

    }
    for(int i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            sum1=sum1+count;
        }
        else if(i%2==0)
        {
        sum2=sum2+count;
        }
        ans=sum1+sum2;
        while(ans!=0)
        {
           ans=ans%10;
           ans=ans/10;
        }

}
}
