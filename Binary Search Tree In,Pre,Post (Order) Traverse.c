#include<stdio.h>
#include<stdlib.h>
 
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
 
struct node* insert(struct node*,int);
struct node* createnode(int);
void inorder(struct node*);
void preorder(struct node*);
void postorder(struct node*);
 
int main()
{
    struct node *root=NULL;
 
    root=insert(root,8);
 
    insert(root,3);
    insert(root,1);
    insert(root,6);
    insert(root,7);
    insert(root,10);
    insert(root,14);
    insert(root,4);
 
 
    printf("In-Order traverse\n");
    inorder(root);
 
    printf("\nPre-Order Traverse\n");
    preorder(root);
 
    printf("\nPost order Traverse\n");
    postorder(root);
 
 
}
 
struct node* insert(struct node* root,int data)
{
   if(root==NULL)
   {
       return createnode(data);
   }
   else if(data < root->data)
   {
       root->left=insert(root->left,data);
   }
   else
   {
       root->right=insert(root->right,data);
   }
   return root;
}
 
struct node* createnode(int data)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
 
    newnode->left=NULL;
    newnode->data=data;
    newnode->right=NULL;
 
    return newnode;
}
 
void inorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
 
    inorder(root->left);
    printf("%d ->",root->data);
    inorder(root->right);
 
}
 
void preorder(struct node *root)
{
    if(root==NULL)
      return;
 
      printf("%d ->",root->data);
      preorder(root->left);
      preorder(root->right);
}
 
void postorder(struct node *root)
{
    if(root==NULL)
      return;
      postorder(root->left);
      postorder(root->right);
      printf("%d ->",root->data);
}
