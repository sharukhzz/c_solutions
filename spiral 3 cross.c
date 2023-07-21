#include<stdio.h>
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9},row_start=0,coloumn_start=0,row_end=2,coloumn_end=2;
    while(row_start<row_end && coloumn_start<coloumn_end)
    {
        for(int i=row_start;i<=row_end;i++)
        {
            printf("%d",a[row_start][i]);
        }
        row_start++;
        for(int i=row_start;i<=row_end;i++)
        {
            printf("%d",a[i][coloumn_end]);
        }
        coloumn_end--;
        if(row_start<row_end)
        {
            for(int i=row_start;i>=0;i--)
            {
                printf("%d",a[2][i]);
            }
        }
        /*if(coloumn_start<coloumn_end)
        {
            for(int i=row_start-1;i<row_end;i--)
            {
                printf("%d",a[i][coloumn_start]);
            }
            coloumn_start++;
        }*/
    }
}
/*int k = 0, l = 0,m=3,n=3,j,i,arr[3][3]={1,2,3,4,5,6,7,8,9};
while(k < m && l < n)
{
for(i = l; i < n; i++)
{
    printf("%d ",arr[k][i]);
}
k++;
for(i = k; i < m; i++)
{
printf("%d ",arr[i][n-1]);
}
n–-;
if(k < m)
{
for(i = n – 1; i >= 0; –i)
{
printf("%d ",arr[m-1][i]);
}
m–;
}
if(l < n)
{
for(i = m – 1; i >= k; i–)
{
printf("%d ",arr[i][l]);
}
l++;
}
}
return 0;
}


        /*else if(i==1)
            {
                printf("%d",a[i]);
            }
        }
    }}

    /*for(int j=coloumn_end;j>=coloumn_start;j++)
        {
            if(j==coloumn_end)
            {
            for(int i=1;i<=row_end;i++)
            {
                printf("%d",a[i][j]);
            }
        }

        /*for(int i=row_start;i<row_end;i++)
        {
            printf("%d",a[i]);
        }
        for(int i=coloumn_end;i<coloumn_start;i--)
        {
            printf("%d",a[i]);
        }
        for(int i=row_end;i<row_start;i--)
        {
            printf("%d",a[i]);
        }
    }*/

