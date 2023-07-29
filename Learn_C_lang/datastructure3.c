#include<stdio.h>#include<string.h>#include<stdlib.h>
int kmpSearch(char *str, char *word, int *ptr){    int i = 0, j = 0;
    while ((i + j) < strlen(str))    {        // match found on the target and pattern string char        if (word[j] == str[i + j])        {            if (j == (strlen(word) - 1))            {                printf("%s located at the index %d\n",                       word, i + 1);                return 0;            }            j = j + 1;        }        else        {            // manipulating next indices to compare            i = i + j - ptr[j];            if (ptr[j] > -1)            {                j = ptr[j];            }            else            {                j = 0;            }        }    }}
// find the overlap array for the given patternvoid findOverlap(char *word, int *ptr){    int i = 2, j = 0, len = strlen(word);ptr[0] = -1;    ptr[1] = 0;
    while (i < len)    {        if (word[i - 1] == word[j])        {            j = j + 1;            ptr[i] = j;            i = i + 1;        }        else if (j > 0)        {            j = ptr[j];        }        else        {            ptr[i] = 0;            i = i + 1;        }    }}
int main(){    char word[256], str[1024];;    int *ptr, i;
    /* get the target string from the user */    printf("Enter your target string:");    fgets(str, 1024, stdin);    str[strlen(str) - 1] = '\0';
    /* get the pattern string from the user */    printf("Enter your pattern string:");    fgets(word, 256, stdin);    word[strlen(word) - 1] = '\0';
    /* dynamic memory allocation for overlap array */    ptr = (int *) calloc(1, sizeof(int) * (strlen(word)));
    /* finds overlap array */    findOverlap(word, ptr);    /* find the index of the pattern in target string */    kmpSearch(str, word, ptr);
    return 0;}#include <stdio.h>
int main(){    int array[100], search, c, n;
    printf("Enter the number of elements in array\n");    scanf("%d", &n);
    printf("Enter %d integer(s)\n", n);
    for (c = 0; c < n; c++)    {        scanf("%d", &array[c]);    }
    printf("Enter the number to search\n");    scanf("%d", &search);
    for (c = 0; c < n; c++)    {        // if required element found        if (array[c] == search)             {            printf("%d is present at location %d.\n", search, c + 1);            break;        }    }    if (c == n)        printf("%d is not present in array.\n", search);
    return 0;}#include <stdio.h>#include <stdlib.h>
struct NODE {
    int number;    struct NODE *next;
};
int search_value(struct NODE *llist, int num);
void append_node(struct NODE *llist, int num);
void display_list(struct NODE *llist);
void delete_node(struct NODE *llist, int num);
int main(){
    int num = 0;    int input = 1;    int retval = 0;    struct NODE *llist;
    llist = (struct NODE *) malloc(sizeof(struct NODE));    llist->number = 0;    llist->next = NULL;
    while (input != 0)    {
        printf("\n-- Menu Selection --\n");        printf("0) Quit\n");        printf("1) Insert\n");        printf("2) Delete\n");        printf("3) Search\n");        printf("4) Display\n");        scanf("%d", &input);
        switch (input)        {case 0:            default:                printf("Goodbye ...\n");                input = 0;                break;
            case 1:                printf("Your choice: `Insertion'\n");                printf("Enter the value which should be inserted: ");                scanf("%d", &num);                append_node(llist, num);                break;
            case 2:                printf("Your choice: `Deletion'\n");                printf("Enter the value which should be deleted: ");                scanf("%d", &num);                delete_node(llist, num);                break;
            case 3:                printf("Your choice: `Search'\n");                printf("Enter the value you want to find: ");                scanf("%d", &num);                if ((retval = search_value(llist, num)) == -1)                    printf("Value `%d' not found\n", num);                else                    printf("Value `%d' located at position `%d'\n", num, retval);                break;
            case 4:                printf("You choice: `Display'\n");                display_list(llist);                break;
        } /* switch */    } /* while */
    free(llist);    return (0);}
void display_list(struct NODE *llist){    while (llist->next != NULL)    {        printf("%d ", llist->number);        llist = llist->next;    }
    printf("%d", llist->number);}void append_node(struct NODE *llist, int num){    while (llist->next != NULL)        llist = llist->next;
    llist->next = (struct NODE *) malloc(sizeof(struct NODE));    llist->next->number = num;    llist->next->next = NULL;}
void delete_node(struct NODE *llist, int num){    struct NODE *temp;    temp = (struct NODE *) malloc(sizeof(struct NODE));
    if (llist->number == num)    {        /* remove the node */        temp = llist->next;        free(llist);        llist = temp;    } else    {        while (llist->next->number != num)            llist = llist->next;
        temp = llist->next->next;        free(llist->next);        llist->next = temp;    }}
int search_value(struct NODE *llist, int num){    int retval = -1;    int i = 1;
    while (llist->next != NULL)    {        if (llist->next->number == num)            return i;        else            i++;
        llist = llist->next;    }
    return retval;}