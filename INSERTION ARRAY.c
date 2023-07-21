#include<stdio.h>
void main()
{
    int a[4]={1,2,3,4},b[5],i,position,element;
    printf("\n enter the elements to be inserted:",element);
    scanf("%d",&element);
    printf("\n enter the position:",position);
    scanf("%d",&position);
    for(int i=0;i<5;i++)
    {
        b[i]=a[i];
    }
    for(int i=5;i>=position;i--)
    {
        b[i+1]=b[i];
    }
    b[position]=element;
    printf("\n array after insertion are:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",b[i]);
    }
}
