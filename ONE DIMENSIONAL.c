#include<stdio.h>
int main()
{
    int i,j,r,c;
    printf("enter the size:");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("enter the number:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
    {
        printf("\na[%d][%d]=%d",i,j,a[i][j]);
    }
    }
}
