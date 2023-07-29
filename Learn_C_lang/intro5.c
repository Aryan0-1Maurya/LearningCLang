#include<stdio.h>
int main(){    //variable declaration    int size, arr1[10], arr2[10], count = 0, i, j;
    //take user input for array size    printf("Enter number of elements you want to insert in array : ");    scanf("%d", &size);
    //user input for array elements    printf("Enter %d integers : \n", size);
    for (i = 0; i < size; i++)    {        scanf("%d", &arr1[i]);    }
    //logic to check and remove duplicate elements from array    for (i = 0; i < size; i++)    {
        for (j = 0; j < count; j++)        {            if (arr1[i] == arr2[j])            {                break;            }        }
        if (j == count)        {            arr2[count] = arr1[i];            count++;        }    }
    //to print array elements after removing duplicate elements    printf("Array obtained after removing duplicate elements : \n");
    for (i = 0; i < count; i++)    {        printf("%d\n", arr2[i]);    }
    return 0;}#include <stdio.h>
int main(){    int n, c, d, a[100], b[100];
    printf("Enter the number of elements in array\n");    scanf("%d", &n);

    for (c = 0; c < n; c++)        scanf("%d", &a[c]);
    /*     * Copying elements into array b starting from end of array a     */
    for (c = n - 1, d = 0; c >= 0; c--, d++)        b[d] = a[c];
    /*     * Copying reversed array into original.     * Here we are modifying original array, this is optional.     */
    for (c = 0; c < n; c++)        a[c] = b[c];
    printf("Reverse array is\n");
    for (c = 0; c < n; c++)        printf("%d\n", a[c]);
    return 0;}#include<stdio.h>
int main(){    int a[30], ele, num, i;
    printf("\nEnter no of elements :");    scanf("%d", &num);
    printf("\nEnter the values :");    for (i = 0; i < num; i++)    {        scanf("%d", &a[i]);    }
    //Read the element to be searched    printf("\nEnter the elements to be searched :");    scanf("%d", &ele);
    //Search starts from the zeroth location    i = 0;    while (i < num && ele != a[i])    {        i++;    }    //If i < num then Match found    if (i < num)    {        printf("Number found at the location = %d", i + 1);    }    else    {        printf("Number not found");    }
    return (0);}#include <stdio.h>
int main(){
    int number[30];    int i, j, a, n;
    printf("Enter the value of N\n");    scanf("%d", &n);    printf("Enter the numbers \n");
    for (i = 0; i < n; ++i)    {        scanf("%d", &number[i]);    }
    // sorting begins    for (i = 0; i < n; ++i)    {        for (j = i + 1; j < n; ++j)        {            if (number[i] < number[j])            {                a = number[i];                number[i] = number[j];                number[j] = a;            }        }    }
    printf("The numbers arranged in descending order are given below\n");
    for (i = 0; i < n; ++i)    {        printf("%d\n", number[i]);    }    return 0;}#include <stdio.h>#include <string.h>
int main(){
    char name[10][8], tname[10][8], temp[8];    int i, j, n;
    printf("Enter the value of n \n");    scanf("%d", &n);    printf("Enter %d names \n", n);
    for (i = 0; i < n; i++)    {        scanf("%s", name[i]);        strcpy(tname[i], name[i]);    }
    for (i = 0; i < n - 1; i++)    {        for (j = i + 1; j < n; j++)        {            if (strcmp(name[i], name[j]) > 0)            {                strcpy(temp, name[i]);                strcpy(name[i], name[j]);                strcpy(name[j], temp);            }        }    }
    printf("\n-------------------------------\n");    printf("Input Namest\tSorted names\n");    printf("---------------------------------\n");
    for (i = 0; i < n; i++)    {        printf("%s\t\t%s\n", tname[i], name[i]);
    }    printf("----------------------------------\n");    return 0;
}#include<stdio.h>#include <stdlib.h>
int main(){    int i, j, a[10][10], b[10][10], n, temp;    printf("\nEnter the dimensions of matrix:: ");    scanf("%d", &n);    printf("\nEnter the elements of matrix::\n");
    for (i = 0; i < n; i++)        for (j = 0; j < n; j++)            scanf("%d", &a[i][j]);
    printf("\nOriginal Matrix is:: ");    for (i = 0; i < n; i++)    {        printf("\n");        for (j = 0; j < n; j++)            printf("\t%d", a[i][j]);    }
    for (i = 0; i < n; i++)        for (j = 0; j < n; j++)        {            b[j][i] = a[i][j];        }
    printf("\nTranspose Matrix is:: ");    for (i = 0; i < n; i++)    {        printf("\n");        for (j = 0; j < n; j++)            printf("\t%d", b[i][j]);    }
    for (i = 0; i < n; i++)    {        for (j = 0; j < n; j++)        {            if (a[i][j] != b[i][j])            {                printf("\nMatrix is not symmetric :(\n");                exit(0);            }        }    }    printf("\nMatrix is symmetric :)\n");    return 0;}/* * C program to read N integers into an array A and * a) Find the sum of negative numbers * b) Find the sum of positive numbers * c) Find the average of all numbers * Display the results with suitable headings */
#include <stdio.h>
#define MAXSIZE 10
int main(){    int array[MAXSIZE];    int i, num, negative_sum = 0, positive_sum = 0;    float total = 0.0, average;
    printf("Enter the value of N \n");    scanf("%d", &num);    printf("Enter %d numbers (-ve, +ve and zero) \n", num);
    for (i = 0; i < num; i++)    {        scanf("%d", &array[i]);    }
    printf("Input array elements \n");
    for (i = 0; i < num; i++)    {        printf("%+3d\n", array[i]);    }
    /* Summation starts */
    for (i = 0; i < num; i++)    {        if (array[i] < 0)        {            negative_sum = negative_sum + array[i];        }        else if (array[i] > 0)        {            positive_sum = positive_sum + array[i];        }        else if (array[i] == 0)        { ;        }
        total = total + array[i];
    }
    average = total / num;    printf("\n Sum of all negative numbers = %d\n", negative_sum);    printf("Sum of all positive numbers = %d\n", positive_sum);    printf("\n Average of all input numbers = %.2f\n", average);
    return 0;}#include<stdio.h>
int main(){    //declaring a 2d array    int a[10][10];    //declaring variables    int i, j, n, m, sum = 0;
    printf("enter rows and columns of the matrix:");    scanf("%d%d", &m, &n);
    printf("enter the values in the matirx:");
    for (i = 0; i < m; i++)    {        for (j = 0; j < n; j++)        {            // finding sum of diagonal elements            scanf("%d", &a[i][j]);        }    }
    for (i = 0; i < m; i++)    {        sum = sum + a[i][i];    }        printf("the sum of diagonal elements is:%d", sum);    return 0;}#include <stdio.h>
int main(){    int m, n, c, d, a[10][10], sum = 0;
    printf("Enter the number of rows and columns of matrix\n");    scanf("%d%d", &m, &n);    printf("Enter the elements of matrix\n");
    for (c = 0; c < m; c++)    {        for (d = 0; d < n; d++)        {            scanf("%d", &a[c][d]);        }    }        for (c = 0; c < m; c++)    {        for (d = 0; d < n; d++)        {            sum = sum + a[c][d];        }        printf("Sum of %d row : %d\n", c + 1, sum);        sum = 0;    }    return 0;}