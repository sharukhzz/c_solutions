#include<stdio.h>
int main()
{
    int a,b,choice,add,sub;
    printf("enter the numbers:");
    scanf("%d %d",&a,&b);
    printf("\n1.add\n2.sub");
    printf("\nenter your choice:");
    scanf("\n%d",&choice);


    switch(choice)
    {
        case 1 : add=a+b;
        printf("print result:%d",add);
        break;

        case 2 : sub=a-b;
        printf("print result:%d",sub);
        break;

        default:printf("invalid choice");
    }
}
