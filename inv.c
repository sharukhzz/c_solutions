#include<stdio.h>
int main()
{
int n,temp,i,j;
scanf("%d",&n);
int a[n][n];
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
    scanf("%d",&a[i][j]);
}
printf("\n");
}
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
    if(i==j)
    {
        temp=a[i][j];
        a[i][j]=a[n-1][n-1];
        a[n-1][n-1]=temp;
    }
    else
    {
        a[i][j]=-1*a[i][j];
    }
}
}
int A,S,D;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(i==j)
        {
            S=a[i][j]*a[n-1][n-1];
        }
        else
        {
            D=a[i][j]*a[i][j];
        }
    }
}
A=D-S;
//printf("%d",A);
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
    printf("%.2f ",(float)a[i][j]/A);
}
printf("\n");
}
}

