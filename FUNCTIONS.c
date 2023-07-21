#include<stdio.h>
void areaofrect(int l,int b)
{
    int area,parameter;
    area=l*b;
    parameter=2*l*b;
    printf("area=%d",area);
    printf("\nparameter=%d",parameter);
}
void main()
{
    int l=4,b=3;                                //function call
    areaofrect(l,b);                            //call by value
    //printf("area=%d\n",area);
}
