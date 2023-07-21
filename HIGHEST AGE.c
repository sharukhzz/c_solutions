#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the age:",a,b,c,d);
    scanf("%d %d %d %d",&a,&b,&c,&d);
    (a>b && a>c && a>d) ? printf("age a is greater") : (b>c && b>d) ? printf("age b is graeter") : (c>d) ? printf("age c is greater") : printf("age d is greater");
    return 0;
}
