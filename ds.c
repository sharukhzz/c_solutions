#include<stdio.h>
struct node
{
    int key;
    struct node *left,*right;
};
struct node * newnode(int item)
{
    struct node *temp=(struct node*)malloc(sizeof (struct node));
    temp->key=item;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
};
struct node*insert(struct node * root,int item)
{
    {
    if(root=NULL)
    {
        return newnode(item);
    }
    if(root->key > item)
    {
        root->left=insert(root->left,item);
    }
    if(root->key < item)
    {
        root->right=insert(root->right,item);
    }
    }
    return root;
};
void inorder(struct node * root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    printf("%d",root->key);
    inorder(root->right);
}
void preorder(struct node * root)
{
    if(root==NULL)
        return;
    printf("%d",root->key);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node * root)
{
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->key);
}
int main()
{
    struct node*root=NULL;
    int choice,item;
    while(1)
    {
    scanf("%d",&choice);
    printf("enter the choice:%d",choice);
    switch(choice)
    {
        case 1:scanf("%d",&item);
                root=insert(root,item);
                break;
        case 2:inorder();
                break;
        case 3:preorder();
                break;
        case 4:postorder();
                break;
    }
    }
}
