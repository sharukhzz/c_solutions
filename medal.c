#include<stdio.h>
int main()
{
    int value[5],i,j;
    for(i=1;i<5;i++)
    {
     printf("enter the score:");
    scanf("\n%d", &value[i]);
}
for(j=1;j<5;j++)
    {
        if(value[j]<=100 && value[j]>=95)
    {
        printf("\n gold medalist");
    }
    else if(value[j]<95 && value[j]>=90)
    {
        printf("\n silver medalist");
    }
    else if(value[j]<90 && value[j]>=85)
    {
        printf("\n bronze medalist");
    }
    else
    {
        printf("\n average");
}
}
return 0;
}
