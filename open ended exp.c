#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>

//global declaration //

#define MAXSIZE 15

//making a linked list to attach nodes//

 //structure to take every node as a input//
 struct tree
 {
    int data;
    struct tree *left;
    struct tree *right;
 };
 //defining the type of variable as TREE//
 typedef struct tree TREE;

 //insertion of node to BST//
 TREE* insertion(TREE  *root,int data)
 {
    //Building a node to do insertion//
    TREE *newnode;

    //making a pointer to store current and and previous root values//
    TREE *prev,*curr;

    //making linked list to store two variables price and item//


    //memory allocation of newnode //
    newnode=(TREE*)malloc(sizeof(TREE));

    //condition checking for memory allocation//
    if(newnode==NULL)
    {
        printf("Memory ");
        printf("allocation ");
        printf("failed ");
        printf("\n");
        return root;

    }

    //assigning the newnode of left to null//
    newnode->left=NULL;

    //assigning the newnode of left to null//
    newnode->right=NULL;


    //checking if tree is empty//
    if(root==NULL)
    {
        root=newnode;

        //returning the root address //
        return root;
    }

    //assigning the prev to NULL//
    prev=NULL;

    //storing the root data in curr pointer//
    curr=root;

    //searching position to attach the node//
    while(curr!=NULL)
    {
        prev=curr;

        //checking for moving  to left//
        if(newnode->data<curr->data)
            curr=curr->left;


        //checking for moving to right//
        else
            curr=curr->right;
    }


    //attaching the node to BST in left side//
    if(newnode->data<curr->data)
    {
        prev->left=newnode;

    }

    //attaching the node in right of BST//
    else
    {
        prev->right=newnode;
    }

    //displaying successful attachment of node//
    printf("your ");
    printf("order ");
    printf("attached ");
    printf("to ");
    printf("cart ");
    printf("\n");

    //returning the root address to calling function//
    return root;

 }

 void preorder (TREE *root)
 {
     if(root!=NULL)
     {
         printf("%d\t",root->data);
         preorder(root->left);
         preorder(root->right);
     }
     printf("sorry");
 }

 //

int main()
{
    //local declaration of variable//
    char a;

    //salutation //
    printf("welcome ");
    printf("to ");
    printf("DSA ");
    printf("Resturant \n");
    //Terms & coditions//
    printf("We ");
    printf("serve ");
    printf("both ");
    printf("veg ");
    printf("& ");
    printf("Non-Veg ");
    printf("meal.");
    printf("\n");
    printf("*****************");
    printf("\n");
    //customer environment//
    printf("Here ");
    printf("we ");
    printf("customer ");
    printf("friendly ");
    printf("environment.");
    printf("\n ");
    printf("******************");
    printf("\n");
    //discount //

    printf("Here ");
    printf("we ");
    printf("have ");
    printf("monthly ");
    printf("discount ");
    printf("policy ");
    printf("for ");
    printf("regular ");
    printf("customer ");
    printf("\n");
    printf("******************");
    printf("\n");
    //discount chart//
    printf("Discount ");
    printf("price ");
    printf("will ");
    printf("be ");
    printf("available ");
    printf("at ");
    printf("the ");
    printf("time ");
    printf("booking ");
    printf("\n");
    printf("*********************");
    printf("\n");

    //declaration of a pointer of data type TREE//
    TREE *root;
    //assigning initial value of tree to root//
    root=NULL;

    //defining the type of item and choice//
    int data;
    int choice;

    //initializing the value to 0//
    data=0;
    choice=0;
    while(1)
    {
        printf("our ");
        printf("food ");
        printf("menu ");
        printf("is ");
        printf("******************");
        printf("\n");

        //food menu for ordering//
        printf("1");
        printf("-");
        printf("aaa");
        printf("\n");

        printf("2");
        printf("-");
        printf("aab");
        printf("\n");

        printf("3");
        printf("-");
        printf("aac");
        printf("\n");

        printf("4");
        printf("-");
        printf("aad");
        printf("\n");

        printf("5");
        printf("-");
        printf("aae");
        printf("\n");

        printf("6");
        printf("-");
        printf("aaf");
        printf("\n");

        printf("********************");
        printf("\n");


        //input format constant for the user to enter his choice//
        printf("Enter ");
        printf("the ");
        printf("character ");
        printf("in ");
        printf("prescribed ");
        printf("way ");
        printf("as ");
        printf("letters ");
        printf("are ");
        printf("case ");
        printf("sensitive ");
        printf("\n");
        printf("******************");
        printf("\n");

        //options for entering nodes//
        printf("A.");
        printf("to ");
        printf("add ");
        printf("elements ");
        printf("in ");
        printf("your ");
        printf("order ");
        printf("\n");

        //option for viewing your cart//
        printf("B.");
        printf("to ");
        printf("view ");
        printf("your ");
        printf("cart ");
        printf("\n");

        //input for the choice of task to perform//
        printf("Enter ");
        printf("the ");
        printf("options ");
        printf("to ");
        printf("perform.");
        printf("\n");

        //scanning the character,to avoid syntax fault//


        //taking the choice of user//
        scanf("%c",&a);

        //
        switch(a)
        {

            case 'A' :
                        //To get ENTER as a character//

                        printf("Enter ");
                        printf("the ");
                        printf("item ");
                        printf("\n");

                        //taking the choice from user//
                        scanf("%d",&data);

                        //calling the function insert for insertion//
                        //storing the returned value to called function in root//
                        root=insertion(root,data);
                        getchar();
                        break;
            case 'B' : preorder(root);
                        getchar();
                        break;
            default:printf("ter\n");
            exit(0);
        }



    }



}
