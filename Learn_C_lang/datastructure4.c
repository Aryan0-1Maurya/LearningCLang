#include <stdio.h>#include <stdlib.h>
struct qnode {    int data;    int prio;    struct qnode *next;};
void quein(struct qnode **, struct qnode **, int, int);
int quedel(struct qnode **, struct qnode **, int *, int *);
int main(void){    int tab[10] = {2, 8, 3, 5, 4, 9, 6, 7, 1, 0};    struct qnode *first = NULL;    struct qnode *last = NULL;    int val, prio, i;
    for (i = 0; i < 10; i++)    {        val = tab[i], prio = i;        printf("Inserting: value: %d with priority: %d\n", prio, val);        quein(&first, &last, val, prio);    }
    printf("=-=\n");
    for (i = 0; i < 11; i++)    {        val = tab[i], prio = i;        if (quedel(&first, &last, &val, &prio) != -1)            printf("Deleting: value: %d with priority: %d\n", prio, val);    }
    return 0;}
int quedel(struct qnode **first, struct qnode **last, int *prio, int *val){    struct qnode *tmp = NULL;
    if ((NULL == *last) && (*last == *first))    {        fprintf(stderr, "Empty queue.....\n");        return -1;    }*val = (*first)->data, *prio = (*first)->prio;    tmp = *first, *first = (*first)->next;
    if (*last == tmp)        *last = (*last)->next;    free(tmp);
    return 0;}
void quein(struct qnode **first, struct qnode **last, int prio, int val){    struct qnode *tmp = NULL;    struct qnode *tmp1 = NULL;
    tmp = (qnode *) malloc(sizeof(struct qnode));
    tmp->data = val;    tmp->prio = prio;    tmp->next = NULL;
    if (*last == NULL)    {        *last = tmp;        *first = *last;    } else    {        if ((*first)->prio < prio)        {            tmp->next = *first;            *first = tmp;        } else        {            if ((*last)->prio > prio)            {                (*last)->next = tmp;                *last = tmp;            } else            {                tmp1 = *first;                while ((tmp1->next)->prio >= prio)                {                    tmp1 = tmp1->next;                }                tmp->next = tmp1->next;                tmp1->next = tmp;            }        }
    }
    return;}#define true 1#define false 0
#include<stdio.h>#include <stdlib.h>
struct queue_point {    int element;    struct queue_point *n;};
struct queue_point *f_ptr = NULL;
int is_que(void);
void add_ele(int);
int remove_ele(void);
void show_ele();
int main(){    int ele, choice, j;
    printf("1 To insert an element");    printf("\n2 To remove an element");    printf("\n3 To display all the elements");    printf("\n4 Exit\n");    while (1)    {        printf("\nEnter your choice: ");        scanf("%d", &choice);
        switch (choice)        {            case 1:            {                printf("\nElement to be inserted: ");                scanf("%d", &ele);                add_ele(ele);                break;            }
            case 2:            {                if (!is_que())                {                    j = remove_ele();                    printf("\n%d is removed from the queue", j);printf("\n");                }                else                {                    printf("\nQueue is Empty.\n");                }                break;            }
            case 3:                show_ele();                break;
            case 4:                exit(1);                break;
            default:                printf("\nInvalid choice.\n");                break;        }
    }    return 0;}
/* Function to check if the queue is empty*/int is_que(void){    if (f_ptr == NULL)        return true;    return false;}
/* Function to add an element to the queue*/void add_ele(int element){    /*dynamically allocate the memory*/    struct queue_point *queue = (struct queue_point *) malloc(sizeof(struct queue_point));
    queue->element = element;    queue->n = NULL;    if (f_ptr == NULL)    {        f_ptr = queue;    }    else    {        struct queue_point *ptr;        ptr = f_ptr;        for (ptr = f_ptr; ptr->n != NULL; ptr = ptr->n);ptr->n = queue;    }}
/* Function to remove an element from the queue*/int remove_ele(){    struct queue_point *queue = NULL;    if (is_que() == false)    {        int j = f_ptr->element;        queue = f_ptr;        f_ptr = f_ptr->n;
        /*If you have allocated a memory block with the functions malloc(), calloc()        or realloc() then you need to free the previously allocated memory.*/
        free(queue);        return j;    }    else    {        printf("\nQueue is empty.\n");        return -9999;    }}
/* Function to display the queue*/void show_ele(){    struct queue_point *ptr = NULL;    ptr = f_ptr;    if (is_que())    {        printf("\nQUEUE is Empty.\n");        return;    }    else    {        printf("\nElements present in Queue are: ");        while (ptr != NULL)        {            printf("%d\t", ptr->element);            ptr = ptr->n;        }        printf("\n");    }}#include<stdio.h>#include<stdlib.h>
typedef struct Node {    int data;    struct Node *next;}node;
void insert(node *pointer, int data){    /* Iterate through the list till we encounter the last node.*/
    while(pointer->next!=NULL)    {            pointer = pointer -> next;    }
    /* Allocate memory for the new node and put data in it.*/
    pointer->next = (node *)malloc(sizeof(node));    pointer = pointer->next;    pointer->data = data;    pointer->next = NULL;    printf("%d entered.\n",&data);}
int find(node *pointer, int key){    pointer = pointer -> next; //First node is dummy node.
    /* Iterate through the entire linked list and search for the key. */
    while(pointer!=NULL)    {        if(pointer->data == key) //key is found.        {            return 1;        }        pointer = pointer -> next;//Search in the next node.    }
    /*Key is not found */    return 0;}
void delete(node *pointer, int data){    /* Go to the node for which the node next to it has to be deleted */while(pointer->next!=NULL && (pointer->next)->data != data)    {            pointer = pointer -> next;    }
    if(pointer->next==NULL)    {            printf("Element %d is not present in the list\n",data);            return;    }
    /* Now pointer points to a node and the node next to it has to be removed */
    node *temp;    temp = pointer -> next;
    /*temp points to the node which has to be removed*/
    pointer->next = temp->next;    printf("%d deleted.\n",data);
    /*We removed the node which is next to the pointer (which is also temp) */
    free(temp);
    /* Beacuse we deleted the node, we no longer require the memory used for it .        free() will deallocate the memory. */
    return;}
void print(node *pointer){    if(pointer==NULL)    {            return;    }    printf("%d ",pointer->data);    print(pointer->next);}
int main(){    /* start always points to the first node of the linked list.       temp is used to point to the last node of the linked list. */
    node *start,*temp;    start = (node *)malloc(sizeof(node));     temp = start;    temp -> next = NULL;/* Here in this code, we take the first node as a dummy node.       The first node does not contain data, but it used because to avoid handling special cases       in insert and delete functions. */           printf("1. Insert\n");    printf("2. Delete\n");    printf("3. Print\n");    printf("4. Find\n");
    while(1)    {        int query;        scanf("%d",&query);        if(query==1)        {            int data;            scanf("%d",&data);            insert(start,data);        }        else if(query==2)        {            int data;            scanf("%d",&data);            delete(start,data);        }        else if(query==3)        {            printf("The list is ");            print(start->next);            printf("\n");        }        else if(query==4)        {            int data;            scanf("%d",&data);            int status = find(start,data);            if(status)            {                printf("Element Found\n");            }            else            {                printf("Element Not Found\n");            }        }    }}#include <stdio.h>
#define MAXSIZE 5
struct stack {    int stk[MAXSIZE];    int top;};typedef struct stack STACK;STACK s;
void push(void);
int pop(void);
void display(void);
int main(){    int choice;    int option = 1;    s.top = -1;
    printf("STACK OPERATION\n");    printf("------------------------------------------\n");    printf("1 --> PUSH\n");    printf("2 --> POP\n");    printf("3 --> DISPLAY\n");    printf("4 --> EXIT\n");    printf("------------------------------------------\n");    while (option != 4)    {        printf("Enter your choice : ");        scanf("%d", &choice);        switch (choice)        {            case 1:                push();                break;            case 2:                pop();                break;            case 3:                display();                break;            case 4:                return 0;        }    }    return 0;}
void push(){    int num;if (s.top == (MAXSIZE - 1))    {        printf("Stack is Full\n");        return;    }    else    {        printf("Enter the element to be pushed : ");        scanf("%d", &num);        s.top = s.top + 1;        s.stk[s.top] = num;    }    return;}
int pop(){    int num;    if (s.top == -1)    {        printf("Stack is Empty\n");        return (s.top);    }    else    {        num = s.stk[s.top];        printf("Poped element is = %d\n", s.stk[s.top]);        s.top = s.top - 1;    }    return (num);}
void display(){    int i;    if (s.top == -1)    {        printf("Stack is empty\n");        return;    }    else    {        printf("\nThe status of the stack is \n");        for (i = s.top; i >= 0; i--)        {            printf("%d\n", s.stk[i]);        }    }    printf("\n");}