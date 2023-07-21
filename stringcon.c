#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter the size : ");
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    int count=0;
    char temp[100];
    for(int i=0;i<n;i+=2)
    {
        char ch,nums;
        int num;
        ch=str[i];
        nums=str[i+1];
        num=nums-'0';
    for(int j=count;j<count+num;j++)
    {
        temp[j]=ch;
    }
    count=count+num;
    }
    for(int i=0;i<count;i++)
    {
        printf("%c",temp[i]);
    }

}
