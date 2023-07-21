#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];
    int choice;
    printf("Enter the sentence:");
    gets(name);
    printf("Enter the choice:",choice);
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:gets(name);
               first();
               break;

    }
    void first()
    {
        puts("IT");
    }

}
