#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
}*temp,*head,*tail,*newnode,*prev,*current;
void insert()
{
    int n;
    scanf("%d",&n);
    while(n-->0)
    {
    newnode=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=head;
   // newnode->prev=NULL;
    if(head == NULL)
    {
        head=newnode;
        tail=newnode;
        //tail->next=newnode;
    }
    else
    {
        tail->next=newnode;
        tail=newnode;
        //newnode->next=head;
    }
    }
}
void reverse()
{
    if (head == NULL)
        return NULL;
    prev = NULL;
    current = head;
    do
    {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    } while (current != head);

    head->next = prev;
    head = prev;
}
void display()
{

	current = head;
	if (head == NULL)
	{
		printf("\nDisplay List is empty\n");
	}
	else
	{
		do
		{
			printf("%d ", current->data);
			current = current->next;
		} while (current != head);
	}
}
int main()
     {
         while(1)
         {
         int choice;
         printf("\n1.insert\n2.reverse\n3.display");
         scanf("%d",&choice);
         switch(choice)
         {
             case 1 : insert();
                        break;
             case 2 :  reverse();
                        break;
             case 3 :  display();
                        break;
         }
         }
     }
