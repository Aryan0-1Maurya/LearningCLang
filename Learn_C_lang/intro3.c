#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int queue_array[MAX];
int rear = -1;
int front = -1;

void insert()
{

    int add_item;

    if (rear == MAX - 1)
    {

        printf("Queue Overflow \n");

    }
    else
    {

        if (front == -1)
        {
            // If queue is initially empty
            front = 0;

        }

        printf("Inset the element in queue : ");

        scanf("%d", &add_item);

        rear = rear + 1;
        queue_array[rear] = add_item;

    }

}


void display()
{

    int i;

    if (front == -1)
    {
        printf("Queue is empty \n");
    }
    else
    {

        printf("Queue is : \n");

        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue_array[i]);
        }

        printf("\n");

    }

}void deleteElement()
{

    if (front == -1 || front > rear)
    {
        printf("Queue Underflow \n");
        return;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        front = front + 1;
    }

}

int main()
{

    int choice;

    printf("1.Insert element to queue \n");
    printf("2.Delete element from queue \n");
    printf("3.Display all elements of queue \n");
    printf("4.Quit \n");

    while (1)
    {
        printf("Enter your choice : ");

        scanf("%d", &choice);

        switch (choice)
        {

            case 1:
                insert();
                break;
            case 2:
                deleteElement();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(1);
            default:
                printf("Wrong choice \n");
        }
    }
}#include <stdio.h>

#define MAX 5
int top, status;

// PUSH FUNCTION
void push(int stack[], int item)
{
    if (top == (MAX - 1))
        status = 0;
    else
    {
        status = 1;
        ++top;
        stack[top] = item;
    }
}

// POP FUNCTION
int pop(int stack[])
{
    int ret;
    if (top == -1)
    {
        ret = 0;
        status = 0;
    }
    else
    {
        status = 1;
        ret = stack[top];
        --top;
    }
    return ret;
}

// FUNCTION TO DISPLAY STACK
void display(int stack[])
{
    int i;
    printf("\nThe Stack is: ");
    if (top == -1)
        printf("empty");
    else
    {
        for (i = top; i >= 0; --i)
            printf("\n--------\n|%3d |\n--------", stack[i]);
    }
    printf("\n");
}int main()
{
    int stack[MAX], item;
    int ch;
    top = -1;

    printf("\nMAIN MENU");
    printf("\n1.PUSH (Insert) in the Stack");
    printf("\n2.POP (Delete) from the Stack");
    printf("\n3.Exit (End the Execution)");

    do
    {
        do
        {

            printf("\nEnter Your Choice: ");
            scanf("%d", &ch);

            if (ch < 1 || ch > 3)
                printf("\nInvalid Choice, Please try again");

        } while (ch < 1 || ch > 3);

        switch (ch)
        {
            case 1:
                printf("\nEnter the Element to be pushed : ");
                scanf("%d", &item);
                printf("%d", item);
                push(stack, item);
                if (status)
                {
                    printf("\nAfter Pushing ");
                    display(stack);
                    if (top == (MAX - 1))
                        printf("\nThe Stack is Full");
                }
                else
                    printf("\nStack overflow on Push");
                break;
            case 2:
                item = pop(stack);
                if (status)
                {
                    printf("\nThe Popped item is %d. After Popping: ", item);
                    display(stack);
                }
                else
                    printf("\nStack underflow on Pop");
                break;

            default:
                printf("\nEND OF EXECUTION");
        }
    } while (ch != 3);
    return 0;
}#include <stdio.h>

int main()
{
    int array[100], position, c, n, value;

    printf("Enter number of elements in array : ");
    scanf("%d", &n);

    printf("Enter %d elements : ", n);

    for (c = 0; c < n; c++)
    {
        scanf("%d", &array[c]);
    }

    printf("Enter the location where you wish to insert an element : ");
    scanf("%d", &position);

    printf("Enter the value to insert : ");
    scanf("%d", &value);

    for (c = n - 1; c >= position - 1; c--)
    {
        array[c + 1] = array[c];
    }

    array[position - 1] = value;

    printf("Resultant array is\t");

    for (c = 0; c <= n; c++)
    {
        printf("%d\t", array[c]);
    }

    return 0;
}#include<stdio.h>

void reduction(float a[][6], int size, int pivot, int col)
{
    int i, j;
    float factor;
    factor = a[pivot][col];

    for (i = 0; i < 2 * size; i++)
    {
        a[pivot][i] /= factor;
    }

    for (i = 0; i < size; i++)
    {
        if (i != pivot)
        {
            factor = a[i][col];
            for (j = 0; j < 2 * size; j++)
            {
                a[i][j] = a[i][j] - a[pivot][j] * factor;
            }
        }
    }
}

int main()
{
    float matrix[3][6];
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (j == i + 3)
            {
                matrix[i][j] = 1;
            }
            else
            {
                matrix[i][j] = 0;
            }
        }
    }

    printf("\nEnter a 3 X 3 Matrix :");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%f", &matrix[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        reduction(matrix, 3, i, i);
    }

    printf("\nInvers Matrix");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("%8.3f", matrix[i][j + 3]);
        }
    }

    return 0;
}#include<stdio.h>

int main()
{
    int i, j = 1, l, n;
    int mm[50][50], x, y, z;
    int c = 0;

    label:
    printf("Enter the Order of Magic Matrix(Odd) : ");
    scanf("%d", &n);
    printf("\n");
    if (n % 2 == 0)
    {
        printf("Enter Odd Numbers Only\n\n");
        goto label;
    }

    //find the middle column
    l = (n + 1) / 2;

    //set all the elements to be used to 0
    for (x = 1; x <= n; x++)
    {
        for (y = 1; y <= n; y++)
        {
            mm[x][y] = NULL;
        }
    }

    for (i = 1; i <= (n * n); i++)
    {
        if (mm[j][l] == NULL)
        {
            mm[j][l] = i;
        }
        else
        {
            j = j + 2;
            l--;
            if (j == n + 2)
                j = 2;
            if (l == 0)
                l = n;
            if (j == 0)
                j = n;
            if (l == n + 1)
                l = 1;
            mm[j][l] = i;
        }
        j--;
        l++;
        if (j == 0)
            j = n;
        if (l == n + 1)
            l = 1;
    }

    for (x = 1; x <= n; x++)
    {
        for (y = 1; y <= n; y++)
        {
            z = mm[x][y];
            while (z > 0)
            {
                z = z / 10;
                c++;
            }
            if (c == 1)
                printf(" 0%d", mm[x][y]);
            else
                printf(" %d", mm[x][y]);
            if (y % n == 0)
                printf("\n\n");
            c = 0;
        }
    }
    return 0;
}#include <stdio.h>

int main()
{
    int m, n, p, q, c, d, k, sum = 0;
    int first[10][10], second[10][10], multiply[10][10];

    printf("Enter the number of rows and columns of first matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of first matrix\n");

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &first[c][d]);

    printf("Enter the number of rows and columns of second matrix\n");
    scanf("%d%d", &p, &q);

    if (n != p)
        printf("Matrices with entered orders can't be multiplied with each other.\n");
    else
    {
        printf("Enter the elements of second matrix\n");

        for (c = 0; c < p; c++)
            for (d = 0; d < q; d++)
                scanf("%d", &second[c][d]);

        for (c = 0; c < m; c++)
        {
            for (d = 0; d < q; d++)
            {
                for (k = 0; k < p; k++)
                {
                    sum = sum + first[c][k] * second[k][d];
                }

                multiply[c][d] = sum;
                sum = 0;
            }
        }

        printf("Product of entered matrices:-\n");

        for (c = 0; c < m; c++)
        {
            for (d = 0; d < q; d++)
                printf("%d\t", multiply[c][d]);

            printf("\n");
        }
    }

    return 0;
}#include <stdio.h>

int main()
{
    int m, n, c, d, matrix[10][10], transpose[10][10];

    printf("Enter the number of rows and columns of matrix : ");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of matrix : \n");

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            scanf("%d", &matrix[c][d]);
        }
    }

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            transpose[d][c] = matrix[c][d];
        }
    }

    printf("Transpose of entered matrix :-\n");

    for (c = 0; c < n; c++)
    {
        for (d = 0; d < m; d++)
        {
            printf("%d\t", transpose[c][d]);
        }
        printf("\n");
    }

    return 0;
}#include <stdio.h>

int main()
{
    int array[100], maximum, size, c, location = 1;

    printf("Enter the number of elements in array\n");
    scanf("%d", &size);

    printf("Enter %d integers\n", size);

    for (c = 0; c < size; c++)
        scanf("%d", &array[c]);

    maximum = array[0];

    for (c = 1; c < size; c++)
    {
        if (array[c] > maximum)
        {
            maximum = array[c];
            location = c + 1;
        }
    }

    printf("Maximum element is present at location %d and it's value is %d.\n", location, maximum);
    return 0;
}#include <stdio.h>

int main()
{
    int array[100], minimum, size, c, location = 1;

    printf("Enter the number of elements in array\n");
    scanf("%d", &size);

    printf("Enter %d integers\n", size);

    for (c = 0; c < size; c++)
        scanf("%d", &array[c]);

    minimum = array[0];

    for (c = 1; c < size; c++)
    {
        if (array[c] < minimum)
        {
            minimum = array[c];
            location = c + 1;
        }
    }

    printf("Minimum element is present at location %d and it's value is %d.\n", location, minimum);
    return 0;
}#include <stdio.h>
#include <math.h>

int main()
{
    static int array[10][10];
    int i, j, m, n, sum = 0, sum1 = 0, a = 0, normal;

    printf("Enter the order of the matrix\n");
    scanf("%d %d", &m, &n);
    printf("Enter the n coefficients of the matrix \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &array[i][j]);
            a = array[i][j] * array[i][j];
            sum1 = sum1 + a;
        }
    }
    normal = sqrt((double) sum1);
    printf("The normal of the given matrix is = %d\n", normal);
    for (i = 0; i < m; ++i)
    {
        sum = sum + array[i][i];
    }
    printf("Trace of the matrix is = %d\n", sum);
    return 0;
}#include <stdio.h>

void printDistinct(int arr[], int n)
{
    int i = 0;
    // Pick all elements one by one
    for (i = 0; i < n; i++)
    {
        // Check if the picked element is already printed
        int j;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;

        // If not printed earlier, then print it
        if (i == j)
            printf("%d ", arr[i]);
    }
}

int main()
{
    int arr_size, i;
    printf("Enter array size : ");
    scanf("%d", &arr_size);

    int arr[arr_size];

    printf("Enter %d array elements : \n", arr_size);
    for (i = 0; i < arr_size; i++)
    {
        scanf("%d", &arr[i]);
    }


    printf("\n\nDistinct/Unique array elements : \n");

    int n = sizeof(arr) / sizeof(arr[0]);
    printDistinct(arr, n);

    return 0;
}#include <stdio.h>

/*
 * C Program to Print the Alternate Elements in an Array
 */

int main()
{

    int array[10];
    int i, j, temp;

    printf("Enter 10 elements of an array \n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Alternate elements of a given array \n");

    for (i = 0; i < 10; i += 2)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}