#include<stdio.h>
int main()
{
    int t,x,y,z,mod;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        mod=z%y;
        if(mod==0)
        {
            printf("\nyes");
        }
        else if(z==0)
        {
            printf("\nyes");
        }
        else
        {
            printf("\n no");
        }
    }
}
