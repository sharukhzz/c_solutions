
#include<stdio.h>
struct node
{
    int data;
    struct node * front=NULL;
    struct node * rear=NULL;
};
int main()
{
    struct node*top=NULL;
    top=push(top,5);
    top=push(top,6);
    top=push(top,7);
    top=push(top,8);
    top=pop(top);
    top=pop(top);
    top=pop(top);
    top=pop(top);
}
voienqueue(int element)
{
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=ele;
    temp->next=NULL;


}
