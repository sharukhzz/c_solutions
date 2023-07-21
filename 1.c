#include<stdio.h>
int main()
{
    int t,p,h,count=0,flag1=0,flag2=0;
    for(h=144;h<10000;h++)
    {
        int hex= h*((2*h)-1);
        for(p=165;p<10000;p++)
        {
            int pen=(p*((3*p)-1))/2;
            for(t=285;t<10000;t++)
            {
                int tri=(t*(t+1))/2;
                if((hex==tri)&&(pen==tri))
                {
                    printf("\n%d %d %d",h,p,t);
                    printf("\n%d",tri);
                    //count++;
                }
                if(count==2)
                {
                    flag1=1;
                    break;
                }
            }
            if(flag1==1)
            {
                flag2==1;
                break;
            }
        }
        if(flag2==1)
        {
            break;
        }
    }
}
