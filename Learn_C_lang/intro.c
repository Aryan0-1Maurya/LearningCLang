#include <stdio.h>
int main(){    int array[100], position, c, n;
    printf("Enter number of elements in array\n");    scanf("%d", &n);
    printf("Enter %d elements\n", n);
    for (c = 0; c < n; c++)        scanf("%d", &array[c]);
    printf("Enter the location where you wish to delete element\n");    scanf("%d", &position);
    if (position >= n + 1)        printf("Deletion not possible.\n");    else    {        for (c = position - 1; c < n - 1; c++)            array[c] = array[c + 1];
        printf("Resultant array is\n");
        for (c = 0; c < n - 1; c++)            printf("%d\n", array[c]);    }
    return 0;}#include <stdio.h>
/* * C program to accept an array of integers and delete the * specified integer from the list */
int main(){
    int vectorx[10];    int i, n, pos, element, found = 0;
    printf("Enter how many elements\n");    scanf("%d", &n);    printf("Enter the elements\n");
    for (i = 0; i < n; i++)    {        scanf("%d", &vectorx[i]);    }
    printf("Input array elements are\n");
    for (i = 0; i < n; i++)    {        printf("%d\n", vectorx[i]);    }
    printf("Enter the element to be deleted\n");
    scanf("%d", &element);
    for (i = 0; i < n; i++)    {        if (vectorx[i] == element)        {
            found = 1;            pos = i;            break;
        }    }
    if (found == 1)    {        for (i = pos; i < n - 1; i++)        {
            vectorx[i] = vectorx[i + 1];
        }
        printf("The resultant vector is \n");
        for (i = 0; i < n - 1; i++)        {
            printf("%d\n", vectorx[i]);
        }    }    else    {        printf("Element %d is not found in the vector\n", element);    }    return 0;}#include<stdio.h>
int main(){    int a[2][2], i, j;    long determinant;
    printf("Enter the 4 elements of matrix :\n");    for (i = 0; i < 2; i++)    {        for (j = 0; j < 2; j++)        {            scanf("%d", &a[i][j]);        }    }
    printf("\nThe matrix is\n");
    for (i = 0; i < 2; i++)    {        printf("\n");        for (j = 0; j < 2; j++)        {            printf("%d\t", a[i][j]);        }    }
    determinant = a[0][0] * a[1][1] - a[1][0] * a[0][1];
    printf("\nDeterminant of 2X2 matrix: %ld", determinant);
    return 0;}#include<stdio.h>
int main(){
    int a[3][3], i, j;
    long determinant;
    printf("Enter the 9 elements of matrix :\n");    for (i = 0; i < 3; i++)        for (j = 0; j < 3; j++)            scanf("%d", &a[i][j]);
    printf("\nThe matrix is\n");    for (i = 0; i < 3; i++)    {        printf("\n");        for (j = 0; j < 3; j++)            printf("%d\t", a[i][j]);    }
    determinant = a[0][0] * ((a[1][1] * a[2][2]) - (a[2][1] * a[1][2]))                  - a[0][1] * (a[1][0] * a[2][2] - a[2][0] * a[1][2])                  + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
    printf("\nDeterminant of 3X3 matrix: %ld", determinant);
    return 0;}#include<stdio.h>
int main(){    int a[50], size, i, big, small;
    printf("\nEnter the size of the array: ");    scanf("%d", &size);
    printf("\nEnter %d elements in to the array: ", size);    for (i = 0; i < size; i++)    {        scanf("%d", &a[i]);    }
    big = a[0];    for (i = 1; i < size; i++)    {        if (big < a[i])        {            big = a[i];        }    }    printf("Largest element: %d", big);
    small = a[0];    for (i = 1; i < size; i++)    {        if (small > a[i])        {            small = a[i];        }    }    printf("\nSmallest element: %d", small);
    return 0;}#include <stdio.h>
int main(){    int a[10][10];    int i, j, row, column, flag = 1;
    printf("Enter the dimensions of the matrix A : ");    scanf("%d %d", &row, &column);    printf("Enter the elements of matrix A \n");
    for (i = 0; i < row; i++)    {        for (j = 0; j < column; j++)        {            scanf("%d", &a[i][j]);        }    }    printf("MATRIX A is \n");    for (i = 0; i < row; i++)    {        for (j = 0; j < column; j++)        {            printf("%3d", a[i][j]);        }        printf("\n");    }
    // Check for unit (or identity) matrix    for (i = 0; i < row; i++)    {        for (j = 0; j < column; j++)        {            if (a[i][j] != 1 && a[j][i] != 0)            {                flag = 0;                break;            }        }    }    if (flag == 1)        printf("It is identity matrix \n");    else        printf("It is not a identity matrix \n");}