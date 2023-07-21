#include<stdio.h>
int  main()
{
    int r,c,i,j,k;
    printf("Enter Size Of An Array[Rows And Columns]:");
    scanf("%d %d",&r,&c);
    int aq1[r][c],aq2[r][c],res[r][c];
    printf("Enter The Elements Of Array1:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&aq1[i][j]);
        }
    }
    printf("Enter The Elements Of Array1:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&aq2[i][j]);
        }
    }
    printf("The Elements In Array1:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf(" %d",aq1[i][j]);
        }
        printf("\n");
    }
    printf("The Elements In Array2:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf(" %d",aq2[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           res[i][j]=0;
            for(k=0;k<c;k++)
            {
              res[i][j]+=aq1[i][k]/aq2[k][j];
            }

        }
    }
    printf("The Multiplication Of Two Array Is :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\t%d",res[i][j]);
        }
        printf("\n");
    }
}
