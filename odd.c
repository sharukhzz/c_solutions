#include<stdio.h>
int main()
{
    int t,x,y,z;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        if(((x+y)%2!=0) || ((y+z)%2!=0) || ((z+x)%2!=0))
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
}
