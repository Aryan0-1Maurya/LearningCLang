#include <stdio.h>
int main(){    int c, first, last, middle, n, search, array[100];
    printf("Enter number of elements\n");    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (c = 0; c < n; c++)        scanf("%d", &array[c]);
    printf("Enter value to find\n");    scanf("%d", &search);
    first = 0;    last = n - 1;    middle = (first + last) / 2;
    while (first <= last)    {        if (array[middle] < search)            first = middle + 1;        else if (array[middle] == search)        {            printf("%d found at location %d.\n", search, middle + 1);            break;        }        else            last = middle - 1;
        middle = (first + last) / 2;    }    if (first > last)        printf("Not found! %d is not present in the list.\n", search);
    return 0;}# include <stdio.h># include <stdlib.h>
typedef struct BST {    int data;    struct BST *lchild, *rchild;} node;
void insert(node *, node *);
void inorder(node *);
void preorder(node *);
void postorder(node *);
node *search(node *, int, node **);
node *get_node();
int main(){    int choice;    char ans = 'N';    int key;    node *new_node, *root, *tmp, *parent;    node *get_node();    root = NULL;

    printf("\nProgram For Binary Search Tree ");    printf("\n1.Create");    printf("\n2.Search");    printf("\n3.Recursive Traversals");    printf("\n4.Exit");    do    {        printf("\nEnter your choice :");        scanf("%d", &choice);
        switch (choice)        {            case 1:                do                {                    new_node = get_node();                    printf("\nEnter The Element : ");                    scanf("%d", &new_node->data);

                    if (root == NULL)                        /* Tree is not Created */                        root = new_node;                    else                        insert(root, new_node);
                    printf("\nWant To enter More Elements?(y/n) : ");                    scanf("%s", &ans);                } while (ans == 'y');                break;case 2:                printf("\nEnter Element to be searched :");                scanf("%d", &key);
                tmp = search(root, key, &parent);                printf("\nParent of node %d is %d", tmp->data, parent->data);                break;
            case 3:                if (root == NULL)                    printf("Tree Is Not Created");                else                {                    printf("\nThe Inorder display : ");                    inorder(root);                    printf("\nThe Preorder display : ");                    preorder(root);                    printf("\nThe Postorder display : ");                    postorder(root);                }                break;        }    } while (choice != 4);    return 0;}
/* Get new Node */node *get_node(){    node *temp;    temp = (node *) malloc(sizeof(node));    temp->lchild = NULL;    temp->rchild = NULL;    return temp;}
/* This function is for creating a binary search tree */void insert(node *root, node *new_node){    if (new_node->data < root->data)    {        if (root->lchild == NULL)            root->lchild = new_node;        else            insert(root->lchild, new_node);    }
    if (new_node->data > root->data)    {        if (root->rchild == NULL)            root->rchild = new_node;        else            insert(root->rchild, new_node);    }}
/* This function is for searching the node from binary Search Tree */node *search(node *root, {    node *temp;    temp = root;    while (temp != NULL)    {        if (temp->data == key)        {            printf("\nThe %d Element is Present", temp->data);            return temp;        }        *parent = temp;
        if (temp->data > key)            temp = temp->lchild;        else            temp = temp->rchild;    }    return NULL;}
/* This function displays the tree in inorder fashion */void inorder(node *temp){    if (temp != NULL)    {        inorder(temp->lchild);        printf("%d ", temp->data);        inorder(temp->rchild);    }}
/* This function displays the tree in preorder fashion */void preorder(node *temp){    if (temp != NULL)    {        printf("%d ", temp->data);        preorder(temp->lchild);        preorder(temp->rchild);    }}
/* This function displays the tree in postorder fashion */void postorder(node *temp){    if (temp != NULL)    {        postorder(temp->lchild);        postorder(temp->rchild);        printf("%d ", temp->data);    }}#include<stdio.h>
int binary(int a[], int n, int m, int l, int u);
int main(){
    int a[10], i, n, m, c, l, u;
    printf("Enter the size of an array: ");    scanf("%d", &n);
    printf("Enter the elements of the array: ");    for (i = 0; i < n; i++)    {        scanf("%d", &a[i]);    }
    printf("Enter the number to be search: ");    scanf("%d", &m);
    l = 0, u = n - 1;    c = binary(a, n, m, l, u);    if (c == 0)        printf("Number is not found.");    else        printf("Number is found.");
    return 0;}
int binary(int a[], int n, int m, int l, int u){
    int mid, c = 0;
    if (l <= u)    {        mid = (l + u) / 2;        if (m == a[mid])        {            c = 1;        }        else if (m < a[mid])        {            return binary(a, n, m, l, mid - 1);        }        else            return binary(a, n, m, mid + 1, u);    }    else        return c;}#include<stdio.h>#include<conio.h>#include <stdbool.h>
char que[20];int front = 0, rear = 0, n;char arr[20];
int bfs(int);
char ajMat[20][20];char b[20];
void display();
int p = 0;
int main(){    char v;    int i, j;    printf("Enter the number of nodes in a graph : ");    scanf("%d", &n);    printf("Enter the value of node of graph : \n");    for (i = 0; i < n; i++)    {        scanf("%s", &b[i]);    }
    printf("Enter the value in adjacency matrix in from of 'y' or 'n'\n");    printf("If there exits an edge between two vertices than 'y' otherwise 'n'\n ");    for (i = 0; i < n; i++)        printf(" %c", b[i]);    for (i = 0; i < n; i++)    {        printf("\n%c ", b[i]);        for (j = 0; j < n; j++)        {            printf("%c ", v = getch());            ajMat[i][j] = v;        }        printf("\n\n");    }    for (i = 0; i < n; i++)        bfs(i);
    display();    return 0;}void display(){    int i;    printf("BFS of Graph : ");    for (i = 0; i < n; i++)        printf("%c ", arr[i]);}
void insert(char val){    que[front] = val;    front++;}
char del(){    rear = rear + 1;    return que[rear - 1];}
//stdbool.h header file is required for bool datatypebool unVisit(char val){    int i;    for (i = 0; i < front; i++)    {        if (val == que[i])            return false;    }    return true;}
int bfs(int i){    char m;    int j;    if (front == 0)    {        insert(b[i]);    }    for (j = 0; j < n; j++)    {        if (ajMat[i][j] == 'y')        {            if (unVisit(b[j]))            {                insert(b[j]);            }        }    }    m = del();    arr[p] = m;    p++;    return 0;}#include<stdio.h>#include<stdlib.h>
typedef struct Node {    int data;    struct Node *next;} node;
void insert(node *pointer, int data){    node *start = pointer;
    /* Iterate through the list till we encounter the last node.*/    while (pointer->next != start)    {        pointer = pointer->next;    }    /* Allocate memory for the new node and put data in it.*/    pointer->next = (node *) malloc(sizeof(node));    pointer = pointer->next;    pointer->data = data;    pointer->next = start;    printf("%d entered.\n", data);}
int find(node *pointer, int key){    node *start = pointer;    pointer = pointer->next; //First node is dummy node.    /* Iterate through the entire linked list and search for the key. */    while (pointer != start)    {        if (pointer->data == key) //key is found.        {            return 1;        }        pointer = pointer->next;//Search in the next node.    }    /*Key is not found */    return 0;}
void delete(node *pointer,int data){node *start = pointer;/* Go to the node for which the node next to it has to be deleted */while(pointer->next!=start &&(pointerstart &&(pointer->next)->data != data){pointer = pointer->next;}if(pointer->next==start){printf("Element %d is not present in the list\n",data);return;}/* Now pointer points to a node and the node next to it has to be removed */node *temp;temp = pointer->next;printf("%d deleted.\n",data);/*temp points to the node which has to be removed*/pointer->next = temp->next;/*We removed the node which is next to the pointer (which is also temp) */free(temp);/* Beacuse we deleted the node, we no longer require the memory used for it .   free() will deallocate the memory. */return;}
void print(node *start, node *pointer){    if (pointer == start)    {        return;    }    printf("%d ", pointer->data);    print(start, pointer->next);}
int main(){    /* start always points to the first node of the linked list.       temp is used to point to the last node of the linked list.*/    node *start, *temp;    start = (node *) malloc(sizeof(node));    temp = start;    temp->next = start;start = (node *) malloc(sizeof(node));    temp = start;    temp->next = start;    /* Here in this code, we take the first node as a dummy node.       The first node does not contain data, but it used because to avoid handling special cases       in insert and delete functions.     */    printf("1. Insert\n");    printf("2. Delete\n");    printf("3. Print\n");    printf("4. Find\n");    while (1)    {        int query;        scanf("%d", &query);        if (query == 1)        {            int data;            scanf("%d", &data);            insert(start, data);        }        else if (query == 2)        {            int data;            scanf("%d", &data);            delete (start, data);        }        else if (query == 3)        {            printf("The list is ");            print(start, start->next);            printf("\n");        }        else if (query == 4)        {            int data;            scanf("%d", &data);            int status = find(start, data);            if (status)            {                printf("Element Found\n");            }            else            {                printf("Element Not Found\n");            }        }    }}#include<stdio.h>#include<stdlib.h>
struct Node {    int Data;    struct Node *next;} *rear, *front;
void delQueue(){    struct Node *temp, *var = rear;    if (var == rear)    {        rear = rear->next;        free(var);    }    else        printf("\nQueue Empty");}
void push(int value){    struct Node *temp;    temp = (struct Node *) malloc(sizeof(struct Node));    temp->Data = value;    if (front == NULL)    {        front = temp;        front->next = NULL;        rear = front;    }    else    {        front->next = temp;        front = temp;        front->next = rear;    }}
void display(){    struct Node *var = rear;    if (var != NULL)    {        printf("\nElements are as: ");        while (var != front)        {            printf("\t%d", var->Data);            var = var->next;        }        if (var == front)        {            printf("\t%d", var->Data);        }        printf("\n");    }    else        printf("\nQueue is Empty");}int main(){    int i = 0;    front = NULL;    printf("\n1. Push to Queue");    printf("\n2. Pop from Queue");    printf("\n3. Display Data of Queue");    printf("\n4. Exit\n");    while (1)    {        printf(" \nChoose Option: ");        scanf("%d", &i);        switch (i)        {            case 1:            {                int value;                printf("\nEnter a value to push into Queue: ");                scanf("%d", &value);                push(value);                display();                break;            }            case 2:            {                delQueue();                display();                break;            }            case 3:            {                display();                break;            }            case 4:            {                exit(0);            }            default:            {                printf("\nWrong choice for operation");            }        }    }}