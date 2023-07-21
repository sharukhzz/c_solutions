#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left,*right;
};

int preorder(struct node *root)
{
    if(root!='\0')
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

int inorder(struct node *root)
{
    if(root!='\0')
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

int postorder(struct node *root)
{
    if(root!='\0')
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}

int TREE(struct node * root)
{
    int val1, val2;
    if (root == NULL || (root->left == NULL && root->right == NULL))
    {
        return 1;
    }
    val1 = SUM(root->left);
    val2 = SUM(root->right);
    if (root->data == val1 + val2 && TREE(root->left) && TREE(root->right))
    {
        return 1;
    }
    return 0;
}

int SUM(struct node *root)
{
    if (root == '\0')
    {
        return 0;
    }
    else
    {
        return SUM(root->left) + root->data + SUM(root->right);
    }
}


struct node *create()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    int x;
    scanf("%d",&x);
    if(x==-1)
    {
        return 0;
    }
    else
    {
        newnode->data=x;
        printf("\nEnter the left child of %d = ",x);
        newnode->left=create();
        printf("\nEnter the right child of %d = ",x);
        newnode->right=create();
    }
}

int main()
{
    struct node *root;
    root=create();
   preorder(root);
    printf("\n");
    inorder(root);
    printf("\n");
    postorder(root);

    if(TREE(root))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}

//1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1  //inputs
