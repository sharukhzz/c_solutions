#include<stdio.h>
int main()
{
    char name[20];
    printf("enter the username:",name);
    scanf("%s",&name);
    char pass1;
    printf("enter the password:",pass1);
    scanf("%s",&pass1);
    printf("%s",pass1);
    char pass[10]={'s','h','a','r','u'};
    scanf("%s",&pass);
    if(strcmp(pass1,pass))
    {
        printf("login success");
    }
    printf("login failed");
}
