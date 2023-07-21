#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char *a;
    struct node*next;
}*head,*top,*newnode,*temp,*next1,*curr,*prev;

int main()
{
        char *c;
        gets(c);
        char *word;
        word=strtok(c," ");
        while(word != NULL)
        {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->a=word;
        newnode->next=NULL;
        if(head == NULL)
        {
            head=newnode;
            temp=head;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        word=strtok(NULL," ");
    }
   if(head != NULL)
   {
       prev=NULL;
       curr=head;
       while(curr != NULL)
       {
           next1=curr->next;
           curr->next=prev;
           prev=curr;
           curr=next1;
       }
       head=prev;
   }
   temp=head;
   while(temp != NULL)
   {
       printf("%s ",temp->a);
       temp=temp->next;
   }
}
