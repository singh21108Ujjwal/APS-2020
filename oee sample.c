#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>
#define V 9
#define bool int

//global declaration //

#define MAXSIZE 15

//making a linked list to attach items and price//
struct node
{
    //variable to store price//
    int price;

    //variable to store items//
    int items;

    //self refrential structure pointer//
    struct node *next;
};
//typedefining the user defined data type//
typedef struct node NODE;

/* Node of a doubly linked list */
struct Node
{
    //declaring the data//
    int data;

    // Pointer to next node in DLL
    struct Node* next;

    // Pointer to previous node in DLL
    struct Node* prev;
};

//function to insert node//
NODE * insert_at_start(NODE *start)
{
    //memory allocation of newnode//
    NODE *newnode=(NODE*)malloc(sizeof(NODE));

    //checking weather memory allocation happened or not//
    if(newnode==NULL)
    {
        //printing the message to the user//
        printf("memory allocation failed\n");

        //returning the starting dress to the caling function//
        return start;
    }

    //scanning the food item//
    printf("enter food item\n");
    scanf("%d",&newnode->items);

    //scanning the price of food item//
    printf("Enter the price\n");
    scanf("%d",&newnode->price);

    //assigning the newnode of next to null//
    newnode->next=NULL;

    //checking if node are not present//
    if(start==NULL)
    {
        //returning the value of newnode to called function//
        return newnode;

    }
    //if list is present already//
    else
    {
        //storing the starting value in newnode of next//
        newnode->next=start;

        //updating the value of newnode//
        start=newnode;

        //returning the value of start//
        return start;
    }
}

//function to calculate total amount//
void total_amount(NODE *start)
{
    //initializing the total to store 0//
    int total;
    total=0;

    //checking the condition of empty node//
    if(start==NULL)
    {
        //displaying the message to user//
        printf("No ");
        printf("items ");
        printf("present ");
        printf("in ");
        printf("your ");
        printf("cart ");
        printf("\n");

        //returning the called function//
        return ;
    }

    //if any of item is in cart//
    else
    {
        //transversing through the node//
        while(start!=NULL)
        {
            //updating total amout//
            total=start->price+total;

            //updating the value of start//
            start=start->next;

        }
        //printing the total amount//
        printf("%d is total amount\n",total);
    }
    //returning to the called function;
    return ;
}

// Given a reference (pointer to pointer) to the head//
  // of a DLL and an int, appends a new node at the end  //
void append(struct Node** head_ref, int new_data)
{
    // 1. allocate node //
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // used in step 5//
    struct Node* last = *head_ref;

    // 2. put in the data  //
    new_node->data = new_data;

    // 3. This new node is going to be the last node, so
    // make next of it as NULL*/
    new_node->next = NULL;

    //4. If the Linked List is empty, then make the new
      //    node as head */
    if (*head_ref == NULL)
    {
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }

    //5. Else traverse till the last node //
    while (last->next != NULL)
        last = last->next;

    //  Change the next of last node //
    last->next = new_node;

    // 7. Make last node as previous of new node */
    new_node->prev = last;

    return;
}



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
TREE * insert_into_bst(TREE * root, int data)
{
//creating pointer variable newnode of TREE data type//
TREE *newnode;

//creating pointer variable currnode of TREE data type//
TREE *currnode;

//creating pointer variable parent of TREE data type//
TREE *parent;

// Dynamically allocate the memory using APN malloc//
newnode=(TREE*)malloc(sizeof(TREE));

// Checking if  memory allocation was successful//
if(newnode==NULL)
{
//printing instruction that memory is not allocated//
 printf("Memory allocation failed\n");

//returning root value to called function//
 return NULL;
}
// Initialize the tree data //
newnode->data = data;
// Initialize the newnode->left //
newnode->left = NULL;
// Initialize the newnode->right //
newnode->right = NULL;

// if tree is not then make first insertion as root //
if(root == NULL)
{
root = newnode;
printf("Item ");
printf("added ");
printf("successfully ");
printf("to ");
printf("your ");
printf("cart ");
printf("\n");

//returning the root value//
return root;
}

// assingnig the currnode to root//
//initializing the parent to NULL//
currnode = root;
parent = NULL;

// transversing in tree to know correct position to insert the newnode//
while(currnode != NULL)
{
//storing the value of currnode in parent//
parent = currnode;

//checking for left attaching the node to left//
if(newnode->data < currnode->data)
{
    //making currnode as currnode->left//
    currnode = currnode->left;
}

//making currnode as currnode->right//
else
currnode = currnode->right;
}

// Attach the node at appropriate place using parent pointer
if(newnode->data < parent->data)
{

//attaching newnode to the left node//
parent->left = newnode;
}

//attaching the newnode to the right of tree//
else
{
parent->right = newnode;
}

// print the message for successful completion of task//
printf("Node inserted successfully into the tree\n");

//returning the root value to called function//
return root;
}

struct tNode
{
   int data;
   struct tNode* left;
   struct tNode* right;
};

/* Structure of a stack node. Linked List implementation is used for
   stack. A stack node contains a pointer to tree node and a pointer to
   next stack node */
struct sNode
{
  struct tNode *t;
  struct sNode *next;
};

/* Stack related functions */
void push(struct sNode** top_ref, struct tNode *t);

struct tNode *pop(struct sNode** top_ref);
bool isEmpty(struct sNode *top);

/* Iterative function for inorder tree traversal */
void inOrder(struct tNode *root)
{
  /* set current to root of binary tree */
  struct tNode *current = root;

  /* Initialize stack s */
  struct sNode *s = NULL;
  bool done = 0;

  while (!done)
  {
    /* Reach the left most tNode of the current tNode */
    if(current !=  NULL)
    {
      /* place pointer to a tree node on the stack before traversing
        the node's left subtree */
      push(&s, current);
      current = current->left;
    }

    /* backtrack from the empty subtree and visit the tNode
       at the top of the stack; however, if the stack is empty,
      you are done */
    else
    {
      if (!isEmpty(s))
      {
        current = pop(&s);
        printf("%d ", current->data);

        /* we have visited the node and its left subtree.
          Now, it's right subtree's turn */
        current = current->right;
      }
      else
        done = 1;
    }
  } /* end of while */
}


/* Function to push an item to sNode*/
void push(struct sNode** top_ref, struct tNode *t)
{
  /* allocate tNode */
  struct sNode* new_tNode =
            (struct sNode*) malloc(sizeof(struct sNode));

  if(new_tNode == NULL)
  {
     printf("Stack Overflow \n");
     getchar();
     exit(0);
  }

  /* put in the data  */
  new_tNode->t  = t;

  /* link the old list off the new tNode */
  new_tNode->next = (*top_ref);

  /* move the head to point to the new tNode */
  (*top_ref)    = new_tNode;
}

/* The function returns true if stack is empty, otherwise false */
bool isEmpty(struct sNode *top)
{
   return (top == NULL)? 1 : 0;
}

/* Function to pop an item from stack*/
struct tNode *pop(struct sNode** top_ref)
{
  struct tNode *res;
  struct sNode *top;

  /*If sNode is empty then error */
  if(isEmpty(*top_ref))
  {
     printf("Stack Underflow \n");
     getchar();
     exit(0);
  }
  else
  {
     top = *top_ref;
     res = top->t;
     *top_ref = top->next;
     free(top);
     return res;
  }
}

/* Helper function that allocates a new tNode with the
   given data and NULL left and right pointers. */
struct tNode* newtNode(int data)
{
  struct tNode* tNode = (struct tNode*)
                       malloc(sizeof(struct tNode));
  tNode->data = data;
  tNode->left = NULL;
  tNode->right = NULL;

  return(tNode);
}

#define d 256

/* pat -> pattern
    txt -> text
    q -> A prime number
*/
void search(char pat[], char txt[], int q)
{
    int M = strlen(pat);
    int N = strlen(txt);
    int i, j;
    int p = 0; // hash value for pattern
    int t = 0; // hash value for txt
    int h = 1;

    // The value of h would be "pow(d, M-1)%q"
    for (i = 0; i < M-1; i++)
        h = (h*d)%q;

    // Calculate the hash value of pattern and first
    // window of text
    for (i = 0; i < M; i++)
    {
        p = (d*p + pat[i])%q;
        t = (d*t + txt[i])%q;
    }

    // Slide the pattern over text one by one
    for (i = 0; i <= N - M; i++)
    {

        // Check the hash values of current window of text
        // and pattern. If the hash values match then only
        // check for characters on by one
        if ( p == t )
        {
            /* Check for characters one by one */
            for (j = 0; j < M; j++)
            {
                if (txt[i+j] != pat[j])
                    break;
            }

            // if p == t and pat[0...M-1] = txt[i, i+1, ...i+M-1]
            if (j == M)
                printf("Pattern found at index %d \n", i);
        }

        // Calculate hash value for next window of text: Remove
        // leading digit, add trailing digit
        if ( i < N-M )
        {
            t = (d*(t - txt[i]*h) + txt[i+M])%q;

            // We might get negative value of t, converting it
            // to positive
            if (t < 0)
            t = (t + q);
        }
    }
}

 void preorder (TREE *root)
 {
     if(root!=NULL)
     {
         printf("%d\t",root->data);
         preorder(root->left);
         preorder(root->right);
     }

 }



 //code to display all node using linked list//
 void display(NODE *start)
{

    if(start==NULL)
    {
        printf("empty list\n");
        return ;
    }

    NODE *temp=start;
    while(temp!=NULL)
    {
        printf("%d\t",temp->items);
        temp=temp->next;
    }
}

/* Given a reference (pointer to pointer) to the head of a list
   and an int, inserts a new node on the front of the list. */
void psh(struct Node** head_ref, int new_data)
{
    /* 1. allocate node */
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    /* 2. put in the data  */
    new_node->data = new_data;

    /* 3. Make next of new node as head and previous as NULL */
    new_node->next = (*head_ref);
    new_node->prev = NULL;

    /* 4. change prev of head node to new node */
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;

    /* 5. move the head to point to the new node */
    (*head_ref) = new_node;
}

 //function to delete nodes from the tree//
 //we will pass root of the tree and node to be deleted as input parameter//

 TREE * delete_from_bst(TREE * root, int data)
 {
    //making a pointer variable of data type TREE//
    TREE * currnode;

    //making a pointer variable of data type TREE//
    TREE * parent;

    //making a pointer variable of data type TREE//
    TREE *successor;

    //making a pointer variable of data type TREE//
    TREE *p;

    // Checking if the tree is empty
    if(root == NULL)
        {
            printf("No. ");
            printf("elements ");
            printf("are ");
            printf("in ");
            printf("your ");
            printf("to ");
            printf("remove ");
            printf("\n");

            //returning root address to called function//
            return root;
        }

//assinning the parent to NULL//
 parent = NULL;

 //assigning the currnode to root//
 currnode = root;

 //transversing to get required data//
 while (currnode != NULL && data != currnode->data)
 {
 //storing the value of parent into currnode//
 parent = currnode;

 //if data is less than currnode->left //
 if(data < currnode->data)
 currnode = currnode->left;

 //if data is greater than currnode ->right//
 else
 currnode = currnode->right;
 }

 // If the data is not present in the tree//
 if(currnode == NULL)
 {
 printf("Item ");
 printf("is ");
 printf("not ");
 printf("present ");
 printf("in ");
 printf("your ");
 printf("cart ");
 printf("\n");
 printf("Please ");
 printf("make ");
 printf("a ");
 printf("valid ");
 printf("choice ");
 printf("\n");

 //returning the root value to called function//
 return root;
 }
 // Check  if either left subtree is absent//
 if(currnode->left == NULL)
    {
        //manipulating the p//
        p = currnode->right;
    }

 // checking if right subtree is absent//
 else if (currnode->right == NULL)
    {
        //manipulating the value of p//
        p = currnode->left;
    }

 //if both left and right subtree are missing//
 else
 {

// storing the value in suscessor//
 successor = currnode->right;

 //checking for left subtree//
 while(successor->left != NULL)

//updating  the  value of suscessor//
 successor = successor->left;

 successor->left = currnode->left;

 //assigning the currnode of left to p//
 p = currnode->right;

 }

 // The case of root deletion//

 if (parent == NULL)
{
 //deleting the root data//
 free(currnode);
 //returning the value of p//
 return p;
 }
 //checking for attachement of parent//
 if(currnode == parent ->left)
 {
 //assigning the p to parent of left//
 parent->left = p;
 }

 else
 {
 //assigning the p to parent of right//
 parent->right = p;
 }
 //deleting the required data
 free(currnode);

 //Displaying successful completion of task//
 printf("Item ");
 printf("successfully ");
 printf("removed ");
 printf("from ");
 printf("your ");
 printf("cart ");
 printf("\n");

 //returning the root value to called function//
 return root;
}

// Number of vertices in the graph


// A utility function to find the vertex with minimum distance value, from
// the set of vertices not yet included in shortest path tree
int minDistance(int dist[], bool sptSet[])
{
   // Initialize min value
   int min = INT_MAX, min_index;

   for (int v = 0; v < V; v++)
     if (sptSet[v] == 0 && dist[v] <= min)
         min = dist[v], min_index = v;

   return min_index;
}

// A utility function to print the constructed distance array
int printSolution(int dist[], int n)
{
   printf("Vertex   Distance from Source\n");
   for (int i = 0; i < V; i++)
      printf("%d tt %d\n", i, dist[i]);
}

// Function that implements Dijkstra's single source shortest path algorithm
// for a graph represented using adjacency matrix representation
    void dijkstra(int graph[V][V], int src)
{

    // The output array.  dist[i] will hold the shortest
    // distance from src to i
     int dist[V];

     bool sptSet[V]; // sptSet[i] will true if vertex i is included in shortest
                     // path tree or shortest distance from src to i is finalized

     // Initialize all distances as INFINITE and stpSet[] as false
     for (int i = 0; i < V; i++)
        dist[i] = INT_MAX, sptSet[i] = 0;

     // Distance of source vertex from itself is always 0
     dist[src] = 0;

     // Find shortest path for all vertices
     for (int count = 0; count < V-1; count++)
     {
       // Pick the minimum distance vertex from the set of vertices not
       // yet processed. u is always equal to src in the first iteration.
       int u = minDistance(dist, sptSet);

       // Mark the picked vertex as processed
       sptSet[u] = 1;

       // Update dist value of the adjacent vertices of the picked vertex.
       for (int v = 0; v < V; v++)

         // Update dist[v] only if is not in sptSet, there is an edge from
         // u to v, and total weight of path from src to  v through u is
         // smaller than current value of dist[v]
         if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX
                                       && dist[u]+graph[u][v] < dist[v])
            dist[v] = dist[u] + graph[u][v];
     }

     // print the constructed distance array
     printSolution(dist, V);
}

typedef struct Queue
{
        int capacity;
        int size;
        int front;
        int rear;
        int *elements;
}Queue;

Queue * createQueue(int maxElements)
{
        /* Create a Queue */
        Queue *Q;
        Q = (Queue *)malloc(sizeof(Queue));
        /* Initialise its properties */
        Q->elements = (int *)malloc(sizeof(int)*maxElements);
        Q->size = 0;
        Q->capacity = maxElements;
        Q->front = 0;
        Q->rear = -1;
        /* Return the pointer */
        return Q;
}
void Dequeue(Queue *Q)
{
        /* If Queue size is zero then it is empty. So we cannot pop */
        if(Q->size==0)
        {
                printf("Queue is Empty\n");
                return;
        }
        /* Removing an element is equivalent to incrementing index of front by one */
        else
        {
                Q->size--;
                Q->front++;
                /* As we fill elements in circular fashion */
                if(Q->front==Q->capacity)
                {
                        Q->front=0;
                }
        }
        return;
}
int front(Queue *Q)
{
        if(Q->size==0)
        {
                printf("Queue is Empty\n");
                exit(0);
        }
        /* Return the element which is at the front*/
        return Q->elements[Q->front];
}
void Enqueue(Queue *Q,int element)
{
        /* If the Queue is full, we cannot push an element into it as there is no space for it.*/
        if(Q->size == Q->capacity)
        {
                printf("Queue is Full\n");
        }
        else
        {
                Q->size++;
                Q->rear = Q->rear + 1;
                /* As we fill the queue in circular fashion */
                if(Q->rear == Q->capacity)
                {
                        Q->rear = 0;
                }
                /* Insert the element in its rear side */
                Q->elements[Q->rear] = element;
        }
        return;
}

# define NO_OF_CHARS 256

// A utility function to get maximum of two integers
int max (int a, int b) { return (a > b)? a: b; }

// The preprocessing function for Boyer Moore's
// bad character heuristic
void badCharHeuristic( char *str, int size,
                        int badchar[NO_OF_CHARS])
{
    int i;

    // Initialize all occurrences as -1
    for (i = 0; i < NO_OF_CHARS; i++)
         badchar[i] = -1;

    // Fill the actual value of last occurrence
    // of a character
    for (i = 0; i < size; i++)
         badchar[(int) str[i]] = i;
}

/* A pattern searching function that uses Bad
   Character Heuristic of Boyer Moore Algorithm */
void seearch( char *txt,  char *pat)
{
    int m = strlen(pat);
    int n = strlen(txt);

    int badchar[NO_OF_CHARS];

    /* Fill the bad character array by calling
       the preprocessing function badCharHeuristic()
       for given pattern */
    badCharHeuristic(pat, m, badchar);

    int s = 0;

     // s is shift of the pattern with
                // respect to text
    while(s <= (n - m))
    {
        int j = m-1;

        while(j >= 0 && pat[j] == txt[s+j])
            j--;


        if (j < 0)
        {
            printf("\n pattern occurs at shift = %d", s);

            // Shift the pattern so that the next//

            s += (s+m < n)? m-badchar[txt[s+m]] : 1;

        }

        else

            s += max(1, j - badchar[txt[s+j]]);
    }
}

// A structure to represent a stack
struct Stack
{
    int top;
    unsigned capacity;
    int* array;
};

// function to create a stack of given capacity. It initializes size of
// stack as 0
struct Stack* createStack(unsigned capacity)
{
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*) malloc(stack->capacity * sizeof(int));
    return stack;
}

// Stack is full when top is equal to the last index
int isFull(struct Stack* stack)
{   return stack->top == stack->capacity - 1; }

// Stack is empty when top is equal to -1
int issEmpty(struct Stack* stack)
{   return stack->top == -1;  }

// Function to add an item to stack.  It increases top by 1
void pussh(struct Stack* stack, int item)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}

// Function to remove an item from stack.  It decreases top by 1
int poop(struct Stack* stack)
{
    if (issEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top--];
}
// Driver program to test above functions


// Given a node as prev_node//
// insert a new node after the given node /
void insertAfter(struct Node* prev_node, int new_data)
{
    //1. check if the given prev_node is NULL //
    if (prev_node == NULL) {
        printf("the given previous node cannot be NULL");
        return;
    }

    // allocate new node //
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // 3. put in the data  //
    new_node->data = new_data;

    // Make next of new node as next of prev_node //
    new_node->next = prev_node->next;

    // Make the next of prev_node as new_node //
    prev_node->next = new_node;

    // Make prev_node as previous of new_node //
    new_node->prev = prev_node;

    // Change previous of new_node's next node //
    if (new_node->next != NULL)
        new_node->next->prev = new_node;
}
 //main function//

int main()
{
    //local declaration of variable//
    char a;
    char b[1000];

    //declaring a variable of node data type//
    NODE *start;
    start=NULL;
    //salutation //
    printf("Welcome ");
    printf("To ");
    printf("DSA ");
    printf("Restaurant \n");
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
    printf("have ");
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
    printf("customers. ");
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
        printf("Our ");
        printf("exciting ");
        printf("food ");
        printf("menu ");
        printf("is ");
        printf("\n");
        printf("******************");
        printf("\n");

        //food menu for ordering//
        printf("1");
        printf("-");
        printf("aaa");
        printf("-");
        printf("Rs.40 ");
        printf("\n");

        printf("2");
        printf("-");
        printf("aab");
        printf("-");
        printf("Rs.50 ");
        printf("\n");

        printf("3");
        printf("-");
        printf("aac");
        printf("-");
        printf("Rs.100 ");
        printf("\n");

        printf("4");
        printf("-");
        printf("aad");
        printf("-");
        printf("Rs.38 ");
        printf("\n");

        printf("5");
        printf("-");
        printf("aae");
        printf("-");
        printf("Rs.65 ");
        printf("\n");

        printf("6");
        printf("-");
        printf("aaf");
        printf("-");
        printf("Rs.110 ");
        printf("\n");

        printf("7");
        printf("-");
        printf("aag");
        printf("-");
        printf("Rs.19 ");
        printf("\n");

        printf("8");
        printf("-");
        printf("aah");
        printf("-");
        printf("Rs.55 ");
        printf("\n");

        printf("9");
        printf("-");
        printf("aai");
        printf("-");
        printf("Rs.30 ");
        printf("\n");

        printf("10");
        printf("-");
        printf("aai");
        printf("-");
        printf("Rs.30 ");
        printf("\n");

        printf("11");
        printf("-");
        printf("aai");
        printf("-");
        printf("Rs.30 ");
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
        printf("A:");
        printf("-");
        printf("To ");
        printf("add ");
        printf("elements ");
        printf("in ");
        printf("your ");
        printf("order ");
        printf("\n");

        //option for viewing your cart//
        printf("B:");
        printf("-");
        printf("to ");
        printf("view ");
        printf("your ");
        printf("cart ");
        printf("\n");

        //option for deleting items from your cart//
        printf("C:");
        printf("-");
        printf("To ");
        printf("remove ");
        printf("particular ");
        printf("from ");
        printf("cart ");
        printf("\n");

         //option for billing items from your cart//
        printf("D:");
        printf("-");
        printf("To ");
        printf("calculate ");
        printf("final ");
        printf("amount ");
        printf("of ");
        printf("items ");
        printf("in ");
        printf("your ");
        printf("cart ");
        printf("\n");

         //option for checkout //
        printf("E:");
        printf("-");
        printf("To ");
        printf("finalise ");
        printf("your ");
        printf("order ");
        printf("from ");
        printf("cart ");
        printf("and ");
        printf("proceed ");
        printf("for ");
        printf("billing ");
        printf("and ");
        printf("delivery ");
        printf("options ");
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

            case 'A' : //printing to enter item//
                        printf("Enter ");
                        printf("the ");
                        printf("data ");
                        printf("to ");
                        printf("insert ");
                        printf("in ");
                        printf("your ");
                        printf("cart.");
                        printf("\n");

                        //scanning the input from the user//
                        scanf("%d", &data);

                        //calling the function to insert data into tree//
                        //storing the returned value in root//
                        root = insert_into_bst(root, data);

                        //printing message to enter data//
                        printf("Please ");
                        printf("repeat ");
                        printf("your ");
                        printf("entry ");
                        printf("along ");
                        printf("with ");
                        printf("amount ");
                        printf("for ");
                        printf("billing ");
                        printf("\n");
                        start = insert_at_start(start);

                        //scanning a character i.e ENTER//
                        getchar();

                        //terminating the switch statement//
                        break;
            case 'B' :
                        //DOING TREE TRAVERSAL TO GET CART//
                        preorder(root);

                        //SCANNING CHARACTER AS A INPUT//
                        getchar();
                        printf("\n");
                        break;
            case 'C' :
                        //printing the message for viewing//
                        printf("Enter the item to be deleted\n");

                        //scanning the input for deletion//
                        scanf("%d", &data);

                        //calling the function//
                        root = delete_from_bst(root, data);
                        //scanning for the extra character//
                        getchar();
                        printf("\n");

                        //terminating the case //
                        break;

            case 'D' :
                        total_amount(start);
                        getchar();

                        printf("\n");

                        break;

            case 'E' :
                        //calling the function to print the data//
                        total_amount(start);

                        printf("we ");
                        printf("have ");
                        printf("only ");
                        printf("cash ");
                        printf("payment ");
                        printf("system ");
                        printf("\n ");
                        getchar();

                        //asking for the home delivery option//
                        printf("Enter  ");
                        printf("your ");
                        printf("choice ");
                        printf("12");
                        printf(":-");
                        printf("for ");
                        printf("take ");
                        printf("away ");
                        printf("and ");
                        printf("13:-");
                        printf("for ");
                        printf("dinning ");


                        //defining the variable//
                        int z;
                        scanf("%d",&z);
                        if(z==12)
                        {
                            printf("Please ");
                            printf("enter ");
                            printf("your ");
                            printf("address ");
                            printf("for ");
                            printf("delivery ");
                            printf("purpose");
                            printf(":-");


                            //scanning the input from the user//
                            scanf("%s",b);

                            //scanning enter as a character//
                            getchar();
                            exit(0);
                        }

                        else if(z==13)
                        {
                            printf("please ");
                            printf("wait ");
                            printf("we ");
                            printf("will ");
                            printf("soon ");
                            printf("dine ");
                            printf("your ");
                            printf("order ");
                            getchar();
                        }
                        exit(0);
                        break;




            default:
                    //printing a default message//
                    printf("YOU HAVE ENTERED AN UNEXPECTED VALUE\n");
                    //asking to re-enter the value//
                    printf("enter a VALID data\n");
                    exit(0);
        }



    }

return 0;

}
