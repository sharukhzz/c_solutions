#include<stdio.h>
#include<stdlib.h>
struct node
{
    char *a;
    struct node*next;
}*head,*newnode,*temp;
void create(char *str)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->a=str;
    puts(newnode->a);
    if(temp==NULL)
    {
        head=newnode;
        temp=head;
    }
    else
    {
        temp->next=newnode;
        temp=temp->next;
    }
}
/*void print()
{
    temp=head;
    while(temp != NULL)
    {
        puts(temp->a);
        temp=temp->next;
    }
}*/
int main()
{
    //char a[100];
  //  char b[100];
    //newnode=(struct node*)malloc(sizeof(struct node));
   /* gets(a);
    gets(b);
    puts(a);
    puts(b);
    if()*/
    int n;
    printf("array size : ");
    scanf("%d",&n);
    while(n-->0)
    {
    int size;
    printf("size of str : ");
    scanf("%d",&size);
    char word[size];
    scanf("%s",&word);
    create(word);
    }
   // for(int i=0;i<a)
    //printf("%s",a);
   // print();
}
