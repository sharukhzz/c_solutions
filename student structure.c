#include<stdio.h>
struct student
{
    int rollno;
    char name[10];
    int age;
    float cgpa;
}s1,s2;
int main()
{

    printf("enter the rollno:");
    scanf("%d %d",&s1.rollno,&s2.rollno);
    printf("your rollno:%d %d",s1.rollno,s2.rollno);
    scanf("%s",s1.name);
    printf("enter the name:%s\n",s1.name);
    scanf("%d",&s1.age);
    printf("enter the age:%d\n",s1.age);
    scanf("%f",&s1.cgpa);
    printf("enter the cgpa:%d\n",s1.cgpa);
}
