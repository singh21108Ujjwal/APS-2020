#include<stdio.h>
#include<stdlib.h>

struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};
typedef struct tree TREE;

TREE* insert(TREE *root)
{
    TREE *newnode;
    newnode=(TREE*)malloc(sizeof(TREE));
    if(newnode==NULL)
    {
        printf("memory allocation failed");
        return root;
    }
    newnode->left=newnode->right=NULL;
    printf("Enter the data");
    scanf("%d",&newnode->data);
    if(root==NULL)
    {
        root=newnode;
        return root;
    }
    else
    {
        TREE *prev;
        TREE *curr;
        prev=NULL;
        curr=root;
        while(curr!=NULL)
        {
            prev=curr;
            if(newnode->data<curr->data)
                curr=curr->left;
            else
                curr=curr->right;
        }
        if(prev->data>newnode->data)
            prev->left=newnode;
        else
            prev->right=newnode;
        return root;

    }
}
void traverse(TREE *root)
{
    if(root!=NULL)
    {
    printf("%d\t",root->data);
    traverse(root->left);
    traverse(root->right);
}}



int main()
{

    TREE *root;
    root=NULL;
    while(1)
    {
    printf("1-insert\n2-traverse the tree\n");
    int ch;
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:root=insert(root);
        break;
        case 2:traverse(root);
        break;
        default:printf("Terminating\n");
        exit(0);

    }

}}
