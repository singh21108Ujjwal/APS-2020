#include<stdio.h>
#include<stdlib.h>



struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};
typedef struct tree TREE;

TREE *insert_into_bst(TREE *root)
{
    TREE *newnode;
    newnode=(TREE*)malloc(sizeof(TREE));
    if(newnode==NULL)
    {
        printf("memory allocation failed\n");
        return root;
    }
    printf("enter tree data\n");
    scanf("%d",&newnode->data);
    newnode->left=newnode->right=NULL;
        if(root==NULL)
        {
            root=newnode;
            return root;
        }
        TREE *prev;
        TREE *curr;
        curr=root;
        prev=NULL;
        while(curr != NULL)
        {
            prev=curr;
            if(newnode->data<curr->data)
            curr =curr->left;
            else
                curr=curr->right;

        }
        if(newnode->data<prev->data)
            prev->left=newnode;
        else
            prev->right=newnode;
        printf("node inserted\n");
        return root;
}
void inorder(TREE *root)
{
    if(root!=NULL)
    {
        inorder (root->left);
        printf("%d",root->data);
        inorder(root->right);
    }
}

void preorder(TREE *root)
{
    if(root!=NULL)
    {
        printf("%d",root->data);
         preorder (root->left);
       preorder(root->right);
    }
}

void postorder(TREE *root)
{
    if(root!=NULL)
    {
        postorder (root->left);
       postorder(root->right);
        printf("%d",root->data);
    }
}

TREE* delete_from_bst(TREE *root,int item)
{

       TREE * currnode, *parent, *successor, *p;

    if(root == NULL)
    {
        printf("Tree is empty\n");
        return root;
    }

    parent = NULL;
    currnode = root;
    while (currnode != NULL && item != currnode->data)
    {
        parent = currnode;
        if(item < currnode->data)
            currnode  = currnode->left;
        else
            currnode = currnode->right;
    }

    if(currnode == NULL)  {
        printf("Item not found\n");
        return root;
    }

    if(currnode->left == NULL)
        p = currnode->right;
    else if (currnode->right == NULL)
        p = currnode->left;
    else
    {
        successor = currnode->right;
        while(successor->left != NULL)
            successor = successor->left;

        successor->left = currnode->left;
        p = currnode->right;
    }

    if (parent == NULL) {
        free(currnode);
        return p;
    }

    if(currnode == parent ->left)
        parent->left = p;
    else
        parent->right = p;

    free(currnode);
    return root;

}void adressofroot(TREE *root);
int noofnode(TREE *root);
int no_of_leaf_node(TREE *root);
int maxvalue(TREE *root);
int minValue(TREE *root) ;
int countNonleaf(TREE* root) ;
int size(TREE* root) ;

int main()
{
    TREE *root = NULL;
    int choice;
    int item,c=0,z=0,y,x,w,a;
    while(1)
    {
        printf("1-insert\n2-inorder\n3-preorder\n4-postorder\n5-delete\n6-exit\n7-adress_of_root\n8-no._of_node\n9-no_of_edges\n10-no_of_leaf_node\n11-minimum_valued\n12-maxvalue\n13-no_of_internal_nodes\n");
        printf("14-size_of_binary_tree\n");
        printf("enter choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: root =insert_into_bst(root);
            break;
            case 2: inorder(root);
            break;
             case 3: preorder(root);
            break;
             case 4: postorder(root);
            break;
            case 5: root =delete_from_bst(root,item);
            break;
            case 7: adressofroot(root);
            break;
            case 8: c=noofnode(root);
            printf("%d\n",c);
            break;
            case 9:
                if(c>0)
                printf("%d is no. of edges\n",c-1);
                else
                    printf("0 edges\n");
            break;
            case 10:z=no_of_leaf_node(root);
            printf("no. of leaf nodes is %d\n",z);
            break;
            case 11:y= minValue(root);
            printf("%d is min\n",y);
            break;
            case 12:x=maxvalue(root);
            printf("%d is max element\n",x);
            break;
            case 13: w=countNonleaf(root);
            printf("total internal node is %d\n",w);
            break;
            case 14:a=size(root);
            printf("%u is size\n",a);
            break;
            case 6:printf("terminating\n");
            exit (0);

        }
        printf("******************\n");
    }
}
void adressofroot(TREE *root)
{
    printf("%p\n",&root);
}

int noofnode(TREE *root)
{
   static int count=0;
    if(root!=NULL)
    {
         noofnode(root->left);
         noofnode(root->right);

         count++;
    }
    return count;

}
int no_of_leaf_node(TREE *root)
{

  if(root == NULL)
    return 0;
  if(root->left == NULL && root->right==NULL)
    return 1;
  else
    return no_of_leaf_node(root->left)+
           no_of_leaf_node(root->right);
}
int minValue(TREE *root) {
 TREE* current = root;

  /* loop down to find the leftmost leaf */
  while (current->left != NULL) {
    current = current->left;
  }
  return(current->data);
}
int maxvalue(TREE *root) {
 TREE* current = root;

  /* loop down to find the leftmost leaf */
  while (current->right != NULL) {
    current = current->right;
  }
  return(current->data);
}
int countNonleaf(TREE* root)
{
    // Base cases.
    if (root == NULL || (root->left == NULL &&
                         root->right == NULL))
        return 0;

    // If root is Not NULL and its one of its
    // child is also not NULL
    return 1 + countNonleaf(root->left) +
               countNonleaf(root->right);
}
int size(TREE* root)
{
  if (root==NULL)
    return 0;
  else
    return(size(root->left) + 1 + size(root->right));
}



