#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*left,*right;
}*root=NULL,*newnode,*temp,*temp1;
void insert()
{
   int flag=0;
   /* printf("how many data to enter : ");
    scanf("%d",&n);
    //while(n-->0)*/
    do
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    if(newnode->data > 0)
    {
    newnode->left=NULL;
    newnode->right=NULL;
    if(root == NULL)
    {
        root=newnode;
        temp=root;
        temp1=root;
    }
    else
    {
    while(1)
    {
    if(temp->left==NULL)
    {
        temp->left=newnode;
        break;
       // temp=root->left;
    }
    else if(temp->right==NULL)
    {
        temp->right=newnode;
        break;
       // temp1=root->right;
    }
    if(flag==0)
    {
      temp=temp1->left;
      flag=1;
    }
    else if(flag==1)
    {
        temp=temp1->right;
        flag=0;
        temp1=temp1->left;
    }
    }
    printf("created");
    }
    }
    else
    {
        break;
    }
    }
    while(newnode->data > 0);
}
void inorder()
{
    temp=root;
    if(temp != NULL)
    {
        inorder(temp->left);
        printf("%d ",temp->data);
        inorder(temp->right);
    }

}
int main()
{
    while(1)
    {
    int choice;
    printf("\n1.insert\n2.inorder");
    printf("\nenter the choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:insert();
            break;
    case 2:inorder();
            break;
    }
    }
}
