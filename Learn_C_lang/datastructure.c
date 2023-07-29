#include<stdio.h>#include <stdbool.h>
char stack[20];int top = -1, n;char arr[20];
char dfs(int);
char ajMat[20][20];char b[20];
void display();
int p = 0;
int main(){    char v;    int l = 0, i, j;    printf("Enter the number of nodes in a graph : ");    scanf("%d", &n);    printf("Enter the value of node of graph : \n");    for (i = 0; i < n; i++)    {        scanf("%s", &b[i]);    }    char k = b[0];    printf("Enter the value in adjacency matrix in from of 'Y' or 'N'\n");    printf("\nIf there is an edge between the two vertices then enter 'Y' or 'N'\n ");    for (i = 0; i < n; i++)        printf(" %c", b[i]);
    for (i = 0; i < n; i++)    {        printf("\n%c ", b[i]);        for (j = 0; j < n; j++)        {            printf("%c ", v = getch());            ajMat[i][j] = v;        }        printf("\n\n");    }    for (i = 0; i < n; i++)    {        l = 0;        while (k != b[l])            l++;        k = dfs(l);    }    display();    return 0;}void display(){    int i;    printf(" DFS of Graph : ");    for (i = 0; i < n; i++)        printf("%c ", arr[i]);}
void push(char val){    top = top + 1;    stack[top] = val;}
char pop(){    return stack[top];}
//stdbool.h header file is required for bool datatypebool unVisit(char val){    int i;    for (i = 0; i < p; i++)        if (val == arr[i])            return false;
    for (i = 0; i <= top; i++)        if (val == stack[top])            return false;
    return true;}
char dfs(int i){    int k, j;    char m;    if (top == -1)    {        push(b[i]);    }    m = pop();    top--;    arr[p] = m;    p++;    for (j = 0; j < n; j++)    {        if (ajMat[i][j] == 'y')        {            if (unVisit(b[j]))            {                push(b[j]);            }        }    }    return stack[top];}#include <stdio.h>#include <stdlib.h>
/* Single node will look as followsDeclaring Structure Variables with Structure definition */struct node {    struct node *prev;    int n;    struct node *next;} *h, *temp, *temp1, *temp2, *temp4;
/* Declaring All methods */void insert1();
void insert2();
void insert3();
void traversebeg();
void traverseend(int);
void sort();
void search();
void updatelink();
void delete();
/* counter for number of Node*/int count = 0;
void main(){    int ch;
    h = NULL;    temp = temp1 = NULL;
    printf("\n 1 - Insert at beginning");    printf("\n 2 - Insert at end");    printf("\n 3 - Insert at position i");    printf("\n 4 - Delete at i");    printf("\n 5 - Display from beginning");    printf("\n 6 - Display from end");    printf("\n 7 - Search for element");    printf("\n 8 - Sort the list");    printf("\n 9 - Update an element");    printf("\n 10 - Exit");
    while (1)    {        printf("\n Enter choice : ");        scanf("%d", &ch);        switch (ch)        {            case 1:                insert1();                break;            case 2:                insert2();                break;            case 3:                insert3();                break;            case 4:                delete ();                break;            case 5:                traversebeg();                break;            case 6:temp2 = h;                if (temp2 == NULL)                    printf("\n Error : List empty to display ");                else                {                    printf("\n Reverse order of linked list is : ");                    traverseend(temp2->n);                    printf("\n");                }                break;            case 7:                search();                break;            case 8:                sort();                break;            case 9:                updatelink();                break;            case 10:                exit(0);            default:                printf("\n Wrong choice menu");        }    }}
/* TO create an empty node */void create(){    int data;
    /* allocates requested size of bytes and returns a void pointer pointing to the    first byte of the allocated space ,so cast it to struct node * */
    temp = (struct node *) malloc(1 * sizeof(struct node));    temp->prev = NULL;    temp->next = NULL;    printf("\n Enter value to node : ");    scanf("%d", &data);    temp->n = data;    count++;}
/* TO insert at beginning */void insert1(){    if (h == NULL)    {        create();        h = temp;        //reserve the address of temp node so we can add node at the end        temp1 = h;    }    else    {        create();        temp->next = h;        h->prev = temp;        h = temp;    }}/* To insert at end */void insert2(){
    if (h == NULL)    {        create();        h = temp;        temp1 = h;    }    else    {        create();        temp1->next = temp;        temp->prev = temp1;        temp1 = temp;    }}
/* To insert at any position */void insert3(){    int pos, i = 2;
    printf("\n Enter position to be inserted : ");    scanf("%d", &pos);    temp2 = h;
    if ((h == NULL) && (pos != 1))    {        printf("\n Empty list cannot insert other than 1st position");        printf("\n");        return;    }    if ((pos < 1) || (pos > count + 1))    {        printf("\n Position out of range to insert");        printf("\n");        return;    }    if ((h == NULL) && (pos == 1))    {        create();        h = temp;        temp1 = h;        return;    }    else    {
        if (pos == 1)        {            insert1();        }else        {            if (pos == count + 1)            {                insert2();                return;            }            else            {                if (pos > count + 1)                {                    printf("\n Position out of range to insert");                    printf("\n");                    return;                }            }
            /*              below lines are very important to add the node at any position            */
            while (i < pos)            {                temp2 = temp2->next;                i++;            }            create();            temp->prev = temp2;            temp->next = temp2->next;            temp2->next->prev = temp;            temp2->next = temp;        }    }}
/* To delete an element */void delete(){int i = 1, pos;
printf("\n Enter position to be deleted : ");scanf("%d", &pos);temp2 = h;
if ((pos < 1) || (pos >= count + 1)){printf("\n Error : Position out of range to delete");printf("\n");return;}if (h == NULL){printf("\n Error : Empty list no elements to delete");printf("\n");return;}else{while (i<pos){temp2 = temp2->next;i++;}if (i == 1){if (temp2->next == NULL){printf("\n Node deleted from list");
/* releases previously allocated memory */free(temp2);temp2 = h = NULL;count--;printf("\n");return;}}if (temp2->next == NULL){temp2->prev->next = NULL;free(temp2);printf("\n Node deleted from list");count--;printf("\n");return;}temp2->next->prev = temp2->prev;if (i != 1)temp2->prev->next = temp2->next; /* Might not need this statement if i == 1 check */if (i == 1)h = temp2->next;printf("\n Node deleted");printf("\n");free(temp2);}count--;}
/* Traverse from beginning */void traversebeg(){    temp2 = h;
    if (temp2 == NULL)    {        printf("List empty to display \n");        return;    }    printf("\n Linked list elements from begining : ");
    while (temp2->next != NULL)    {        printf(" %d ", temp2->n);        temp2 = temp2->next;    }    printf(" %d ", temp2->n);
    printf("\n");}
/* To traverse from end recursively */void traverseend(int i){
    if (temp2 != NULL)    {        i = temp2->n;        temp2 = temp2->next;        traverseend(i);        printf(" %d ", i);    }}
/* To search for an element in the list */void search(){    int data, count = 0;    temp2 = h;if (temp2 == NULL)    {        printf("\n Error : List empty to search for data");        printf("\n");        return;    }    printf("\n Enter value to search : ");    scanf("%d", &data);    while (temp2 != NULL)    {        if (temp2->n == data)        {            printf("\n Data found in %d position", count + 1);            printf("\n");            return;        }        else        {            temp2 = temp2->next;        }
        count++;    }    printf("\n Error : %d not found in list", data);    printf("\n");}
/* To sort the linked list */void sort(){    int i, j, x;
    temp2 = h;    temp4 = h;
    if (temp2 == NULL)    {        printf("\n List empty to sort");        printf("\n");        return;    }
    for (temp2 = h; temp2 != NULL; temp2 = temp2->next)    {        for (temp4 = temp2->next; temp4 != NULL; temp4 = temp4->next)        {            if (temp2->n > temp4->n)            {                x = temp2->n;                temp2->n = temp4->n;                temp4->n = x;            }        }    }    traversebeg();}
/* To update a node value in the list */void updatelink(){
    int linkno, data, c = 1;
    printf("\n Enter no of node to be updated : ");    scanf("%d", &linkno);    printf("\n Enter new data : ");    scanf("%d", &data);    temp2 = h;    if (temp2 == NULL)    {        printf("\n Error : List empty no node to update");        printf("\n");        return;    }while (temp2 != NULL)    {        if (c == linkno)        {
            temp2->n = data;            traversebeg();            return;        }        else        {            temp2 = temp2->next;            c++;        }
    }    printf("\n Error : Number %d is not a node in list to update", linkno);    printf("\n");}