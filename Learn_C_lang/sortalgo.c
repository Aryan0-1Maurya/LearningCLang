#include <stdio.h>
int main(){    int num, N[10], x, y, z, temp;
    printf("How many number would you like to sort : ");    scanf("%d", &num);    printf("Input the %d numbers :\n", num);
    for (x = 0; x < num; x++)        scanf("%d", &N[x]);
    for (x = 0; x < num; x++)    {        for (y = 0; y < num - x; y++)        {            if (N[x] > N[x + y])            {                temp = N[x];                N[x] = N[x + y];                N[x + y] = temp;            }        }
        printf("step %d : ", x + 1);        for (z = 0; z < num; z++)        {            printf("%3d", N[z]);        }        printf("\n");    }}#include <stdio.h>
int main(){    int array[100], n, c, d, swap;
    printf("Enter number of elements\n");    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (c = 0; c < n; c++)    {        scanf("%d", &array[c]);    }        for (c = 0; c < (n - 1); c++)    {        for (d = 0; d < n - c - 1; d++)        {            // For decreasing order use <            if (array[d] > array[d + 1])             {                swap = array[d];                array[d] = array[d + 1];                array[d + 1] = swap;            }        }    }
    printf("Sorted list in ascending order:\n");
    for (c = 0; c < n; c++)    {        printf("%d\n", array[c]);    }        return 0;
}#include<stdio.h>#include <stdlib.h>
void bucketSort(int array[], int n){    int i, j;    int *count = NULL;
    // find largest    int mymax = array[0] + 1;    for (i = 1; i < n; ++i)    {        if (mymax < (array[i] + 1))        {            mymax = array[i] + 1;        }    }
    // allocate and zero-fill a proper-sized array    count = (int *) calloc(mymax, sizeof(*count));
    for (i = 0; i < n; i++)    {        (count[array[i]])++;    }
    for (i = 0, j = 0; i < mymax; i++)    {        for (; count[i] > 0; (count[i])--)        {            array[j++] = i;        }    }
    free(count);}
int main(){    int array[100];    int n, i;
    printf("Enter How many Numbers : ");    scanf("%d", &n);
    printf("Enter the %d elements to be sorted:\n", n);    for (i = 0; i < n; i++)    {        scanf("%d", &array[i]);    }
    printf("\nThe array of elements before sorting : \n");    for (i = 0; i < n; i++)    {        printf("%d ", array[i]);    }
    printf("\nThe array of elements after sorting : \n");    bucketSort(array, n);    for (i = 0; i < n; i++)    {        printf("%d ", array[i]);    }
    printf("\n");    return 0;}#include<stdio.h>#include<limits.h>
int heap[1000000], heapSize;
void Init(){    heapSize = 0;    heap[0] = -INT_MAX;}
void Insert(int element){    heapSize++;    heap[heapSize] = element; /*Insert in the last place*/    /*Adjust its position*/    int now = heapSize;    while (heap[now / 2] > element)    {        heap[now] = heap[now / 2];        now /= 2;    }    heap[now] = element;}
int DeleteMin(){    int minElement, lastElement, child, now;    minElement = heap[1];    lastElement = heap[heapSize--];
    for (now = 1; now * 2 <= heapSize; now = child)    {        child = now * 2;        if (child != heapSize && heap[child + 1] < heap[child])        {            child++;        }if (lastElement > heap[child])        {            heap[now] = heap[child];        }        else        {            break;        }    }    heap[now] = lastElement;    return minElement;}
int main(){    int number_of_elements;    printf("Enter no. of elements : ");    scanf("%d", &number_of_elements);    int iter, element;    Init();    printf("Enter %d elements : \n", number_of_elements);    for (iter = 0; iter < number_of_elements; iter++)    {        scanf("%d", &element);        Insert(element);    }    printf("Heap Sort Array : \n");    for (iter = 0; iter < number_of_elements; iter++)    {        printf("%d ", DeleteMin());    }    printf("\n");    return 0;}#include <stdio.h>
int main(){    int n, array[1000], c, d, t;
    printf("Enter number of elements\n");    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (c = 0; c < n; c++)    {        scanf("%d", &array[c]);    }
    for (c = 1; c <= n - 1; c++)    {        d = c;
        while (d > 0 && array[d] < array[d - 1])        {            t = array[d];            array[d] = array[d - 1];            array[d - 1] = t;
            d--;        }    }
    printf("Sorted list in ascending order:\n");
    for (c = 0; c <= n - 1; c++)    {        printf("%d\n", array[c]);    }
    return 0;}#include<stdio.h>
#define MAX 50
void mergeSort(int arr[], int low, int mid, int high);
void partition(int arr[], int low, int high);
int main(){
    int merge[MAX], i, n;
    printf("Enter the total number of elements: ");    scanf("%d", &n);
    printf("Enter the elements to be sorted : ");    for (i = 0; i < n; i++)    {        scanf("%d", &merge[i]);    }
    partition(merge, 0, n - 1);
    printf("After merge sorting elements are: ");    for (i = 0; i < n; i++)    {        printf("%d ", merge[i]);    }
    return 0;}
void partition(int arr[], int low, int high){
    int mid;
    if (low < high)    {        mid = (low + high) / 2;        partition(arr, low, mid);        partition(arr, mid + 1, high);        mergeSort(arr, low, mid, high);    }}
void mergeSort(int arr[], int low, int mid, int high){int i, m, k, l, temp[MAX];
    l = low;    i = low;    m = mid + 1;
    while ((l <= mid) && (m <= high))    {
        if (arr[l] <= arr[m])        {            temp[i] = arr[l];            l++;        }        else        {            temp[i] = arr[m];            m++;        }        i++;    }
    if (l > mid)    {        for (k = m; k <= high; k++)        {            temp[i] = arr[k];            i++;        }    }    else    {        for (k = l; k <= mid; k++)        {            temp[i] = arr[k];            i++;        }    }
    for (k = low; k <= high; k++)    {        arr[k] = temp[k];    }}#include<stdio.h>
void swap(int a[], int left, int right){    int temp;    temp = a[left];    a[left] = a[right];    a[right] = temp;}
int partition(int a[], int low, int high){    int left, right;    int pivot_item;    left = low;    pivot_item = a[low];    right = high;    while (left < right)    {        // Move left while item < pivot        while (a[left] <= pivot_item)            left++;        // Move right while item > pivot        while (a[right] > pivot_item)            right--;        if (left < right)            swap(a, left, right);    }    // right is final position for the pivot    a[low] = a[right];    a[right] = pivot_item;    return right;}
void quicksort(int a[], int low, int high){    int pivot;    // Termination condition!    if (high > low)    {        pivot = partition(a, low, high);        quicksort(a, low, pivot - 1);        quicksort(a, pivot + 1, high);    }}// void quicksort(int a[], int, int);void printarray(int a[], int);
int main(){    int a[50], i, n;    printf("\nEnter no. of elements: ");    scanf("%d", &n);    printf("\nEnter the elements: \n");    for (i = 0; i < n; i++)        scanf("%d", &a[i]);    printf("\nUnsorted elements: \n");    printarray(a, n);    quicksort(a, 0, n - 1);    printf("\nSorted elements: \n");    printarray(a, n);
    return 0;}

void printarray(int a[], int n){    int i;    for (i = 0; i < n; i++)        printf(" %d ", a[i]);    printf("\n");}#include <stdio.h>
#define MAX 100#define SHOWPASS
void print(int *a, int n){    int i;    for (i = 0; i < n; i++)        printf("%d\t", a[i]);}
void radix_sort(int *a, int n){    int i, b[MAX], m = 0, exp = 1;    for (i = 0; i < n; i++)    {        if (a[i] > m)            m = a[i];    }    while (m / exp > 0)    {        int box[10] = {0};        for (i = 0; i < n; i++)            box[a[i] / exp % 10]++;        for (i = 1; i < 10; i++)            box[i] += box[i - 1];        for (i = n - 1; i >= 0; i--)            b[--box[a[i] / exp % 10]] = a[i];        for (i = 0; i < n; i++)            a[i] = b[i];        exp *= 10;
#ifdef SHOWPASS        printf("\n\nPASS : ");        print(a, n);#endif    }}
int main(){    int arr[MAX];    int i, num;
    printf("\nEnter total elements (num < %d) : ", MAX);    scanf("%d", &num);    printf("\nEnter %d Elements : ", num);        for (i = 0; i < num; i++)    {        scanf("%d", &arr[i]);    }        printf("\nARRAY : ");    print(&arr[0], num);    radix_sort(&arr[0], num);    printf("\n\nSORTED : ");    print(&arr[0], num);
    return 0;}#include <stdio.h>#include <stdlib.h>#include <time.h>
void swap(int *lhs, int *rhs){    if (lhs == rhs)    {        return;    }
    int tmp = *lhs;    *lhs = *rhs;    *rhs = tmp;}
int partition(int ar[], int len){    int i, pvt = 0;
    // swap random slot selection to end.    // ar[len-1] will hold the pivot value.    swap(ar + (rand() % len), ar + (len - 1));    for (i = 0; i < len; ++i)    {        if (ar[i] < ar[len - 1])        {            swap(ar + i, ar + pvt++);        }    }
    // swap the pivot value into position    swap(ar + pvt, ar + (len - 1));    return pvt;}
void quicksort(int ar[], int len){    if (len < 2)    {        return;    }
    int pvt = partition(ar, len);    // note increment. skips pivot slot    quicksort(ar, pvt++);    quicksort(ar + pvt, len - pvt);}

int main(){    srand((unsigned int) time(NULL));
    const int N = 20;    int data[N], i;
    printf("Before sorting : \n");    for (i = 0; i < N; ++i)    {        data[i] = rand() % 50 + 1;        printf("%d ", data[i]);    }
    quicksort(data, N);
    printf("\nAfter sorting : \n");    for (i = 0; i < N; ++i)    {        printf("%d ", data[i]);    }
    return 0;}#include <stdio.h>
int main(){
    int array[100], n, c, d, position, swap;
    printf("Enter number of elements\n");    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (c = 0; c < n; c++)        scanf("%d", &array[c]);
    for (c = 0; c < (n - 1); c++)    {        position = c;
        for (d = c + 1; d < n; d++)        {
            if (array[position] > array[d])                position = d;
        }
        if (position != c)        {
            swap = array[c];            array[c] = array[position];            array[position] = swap;
        }    }
    printf("Sorted list in ascending order:\n");
    for (c = 0; c < n; c++)        printf("%d\n", array[c]);
    return 0;}#include <stdio.h>
int main(){    int arr[30];    int i, j, k, tmp, num;    printf("Enter total no. of elements : ");    scanf("%d", &num);    for (k = 0; k < num; k++)    {        printf("\nEnter %d number : ", k + 1);        scanf("%d", &arr[k]);    }
    for (i = num / 2; i > 0; i = i / 2)    {        for (j = i; j < num; j++)        {            for (k = j - i; k >= 0; k = k - i)            {                if (arr[k + i] >= arr[k])                    break;                else                {                    tmp = arr[k];                    arr[k] = arr[k + i];                    arr[k + i] = tmp;                }            }        }    }
    printf("\nShell Sorting : ");    for (k = 0; k < num; k++)    {        printf("%d\t", arr[k]);    }
    return 0;}#include <string.h>#include <stdio.h>
void shell_sort(char *chars, int c){    register int i, j, space, k;    char x, a[5];
    a[0] = 9;    a[1] = 5;    a[2] = 3;    a[3] = 2;    a[4] = 1;
    for (k = 0; k < 5; k++)    {        space = a[k];        for (i = space; i < c; ++i)        {            x = chars[i];            for (j = i - space; (x < chars[j]) && (j >= 0); j = j - space)            {                chars[j + space] = chars[j];            }                        chars[j + space] = x;        }    }}
int main(){    char string[300];
    printf("Enter a string : ");    gets(string);    shell_sort(string, strlen(string));    printf("The sorted string is: %s\n", string);
    return 0;}