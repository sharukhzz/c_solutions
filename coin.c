#include<stdio.h>
int min(int a,int b)
{
    if(a>b)
        return b;
    else
        return a;
}
int main()
{
    int n;
    scanf("%d",&n);
    int c[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }
    int w;
    scanf("%d",&w);
    int co[n][w];
    for(int i=0;i<n;i++)
    {
    co[i][0]=0;
    }
    for(int j=0;j<w;j++)
    {
        co[0][j]=j;
    }
    for(int i=1;i<n;i++)
    {
    for(int j=1;j<w;j++)
    {
      if(c[i]>j)
      co[i][j]=co[i-1][j];
      else
      co[i][j]=min(co[i-1][j],1+co[i][j-c[i]]);
    }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<w;j++)
        {
            printf("%d ",co[i][j]);
        }
        printf("\n");
    }
    printf("the minimum coin is : %d",co[n-1][w-1]);
}

