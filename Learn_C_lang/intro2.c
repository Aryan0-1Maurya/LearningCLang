#include <stdio.h>
int main(){    int m, n, c, d, first[10][10], second[10][10], sum[10][10];
    printf("Enter the number of rows and columns of matrix\n");    scanf("%d%d", &m, &n);    printf("Enter the elements of first matrix\n");
    for (c = 0; c < m; c++)        for (d = 0; d < n; d++)            scanf("%d", &first[c][d]);
    printf("Enter the elements of second matrix\n");
    for (c = 0; c < m; c++)        for (d = 0; d < n; d++)            scanf("%d", &second[c][d]);
    for (c = 0; c < m; c++)        for (d = 0; d < n; d++)            sum[c][d] = first[c][d] + second[c][d];
    printf("Sum of entered matrices:-\n");
    for (c = 0; c < m; c++)    {        for (d = 0; d < n; d++)            printf("%d\t", sum[c][d]);
        printf("\n");    }    printf("\n");
    for (c = 0; c < m; c++)        for (d = 0; d < n; d++)            sum[c][d] = first[c][d] - second[c][d];
    printf("Difference between entered matrices:-\n");    for (c = 0; c < m; c++)    {        for (d = 0; d < n; d++)            printf("%d\t", sum[c][d]);
        printf("\n");    }    return 0;}#include <stdio.h>
int main(){    int m, n, c, d, first[10][10], second[10][10], sum[10][10];
    printf("Enter the number of rows and columns of matrix\n");    scanf("%d%d", &m, &n);    printf("Enter the elements of first matrix\n");
    for (c = 0; c < m; c++)    {        for (d = 0; d < n; d++)        {            scanf("%d", &first[c][d]);        }    }
    printf("Enter the elements of second matrix\n");
    for (c = 0; c < m; c++)    {        for (d = 0; d < n; d++)        {            scanf("%d", &second[c][d]);        }    }
    printf("Sum of entered matrices:-\n");
    for (c = 0; c < m; c++)    {        for (d = 0; d < n; d++)        {            sum[c][d] = first[c][d] + second[c][d];            printf("%d\t", sum[c][d]);        }        printf("\n");    }
    return 0;}#include <stdio.h>
int main(){
    int i, j, a, n, number[30];
    printf("Enter the value of N \n");    scanf("%d", &n);    printf("Enter the numbers \n");
    for (i = 0; i < n; ++i)    {        scanf("%d", &number[i]);    }
    for (i = 0; i < n; ++i)    {        for (j = i + 1; j < n; ++j)        {            if (number[i] > number[j])            {                a = number[i];                number[i] = number[j];                number[j] = a;            }        }    }
    printf("The numbers arranged in ascending order are given below \n");
    for (i = 0; i < n; ++i)    {        printf("%d\n", number[i]);    }    return 0;}int main(){    //If the size is omitted, the compiler uses the number of values    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // No initialization.    float p1[1000];
    //To initialize an array to all zeros, initialize only the first value.    // All 1000 values initialized to zero.    float p2[1000] = {0.0};
    // Initial values of pressure(variable) undefined.    float pressure[10];
    // Remaining characters zero.    char greeting[100] = "Hello";
    // Array size is 6 (final zero on strings).    char goodbye[] = "Adios";
    return 0;}#include <stdio.h>
struct st {
    int a;    char c;
};
int main(){
    // Declare an array of 3 structure objects    struct st st_arr[3];
    // first structure object    struct st st_obj0;    st_obj0.a = 0;    st_obj0.c = 'a';
    //Second structure object    struct st st_obj1;    st_obj1.a = 1;    st_obj1.c = 'b';
    // Third structure object    struct st st_obj2;    st_obj2.a = 2;    st_obj2.c = 'c';
    // Initializing first element of array with first structure object    st_arr[0] = st_obj0;    // Initializing second element of array with second structure object    st_arr[1] = st_obj1;    // Initializing third element of array with third structure object    st_arr[2] = st_obj2;
    printf("\n First Element of array has values of a = [%d] and c = [%c]\n",           st_arr[0].a, st_arr[0].c);    printf("\n Second Element of array has values of a = [%d] and c = [%c]\n",           st_arr[1].a, st_arr[1].c);    printf("\n Third Element of array has values of a = [%d] and c = [%c]\n",           st_arr[2].a, st_arr[2].c);
    return 0;}#include <stdio.h>
int main(){    static int array[10][10];    int i, j, m, n;    int counter = 0;
    printf("Enter the order of the matix : ");    scanf("%d %d", &m, &n);    printf("Enter the co-efficients of the matix \n");    for (i = 0; i < m; ++i)    {        for (j = 0; j < n; ++j)        {            scanf("%d", &array[i][j]);            if (array[i][j] == 0)            {                ++counter;            }        }    }    if (counter > ((m * n) / 2))    {        printf("The given matrix is sparse matrix \n");    }    else    {        printf("The given matrix is not a sparse matrix \n");    }        printf("There are %d number of zeros", counter);    return 0;}