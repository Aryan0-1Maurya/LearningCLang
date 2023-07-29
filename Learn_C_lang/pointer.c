#include <stdio.h>
int main(){
 int first, second, *p, *q, sum;
printf("Enter two integers to add\n");
scanf("%d%d", &first, &second);
 p = &first; q = &second;
 sum = *p + *q;
 printf("Sum of entered numbers = %d\n", sum); 
 return 0;}
 
 
 #include <stdio.h>
 #include <stdlib.h>
int main(){ 
    int n, i, *ptr, sum = 0; 
printf("Enter number of elements: ");
 scanf("%d", &n);
 //memory allocated using malloc ptr = (int *) malloc(n * sizeof(int));  
 if (ptr == NULL) { 
      printf("Error! memory not allocated.");  
     return 0; }
 printf("Enter elements of array: \n");
  for (i = 0; i < n; ++i)
   {  scanf("%d", ptr + i); 
   sum += *(ptr + i); 
   }
 printf("Elements of array are :\n"); for (i = 0; i < n; i++) {  printf("%d ", ptr[i]); 
 }
 //freeing memory of ptr allocated by malloc  free(ptr);  return 0;}#include <stdio.h>
const int MAX = 4;
int main(){
  char *names[] = {"Google", "Amazon", "Toshiba", "Sony",};  int i = 0;
  for (i = 0; i < MAX; i++)  {
    printf("Value of names[%d] = %s\n", i, names[i]);
  }
  return 0;}
  
  
  #include <stdio.h>
const int MAX = 3;
int main(){
  int var[] = {10, 100, 200};  int i, *ptr[MAX];
  for (i = 0; i < MAX; i++)  {
    ptr[i] = &var[i]; /* assign the address of integer. */  }
  for (i = 0; i < MAX; i++)  {
    printf("Value of var[%d] = %d\n", i, *ptr[i]);
  }
  return 0;}
  
  #include <stdio.h>
void concatenate_string(char *, char *);
int main(){  char original[100], add[100];
  printf("Enter source string\n");  gets(original);
  printf("Enter string to concatenate\n");  gets(add);
  concatenate_string(original, add);
  printf("String after concatenation is \"%s\"\n", original);
  return 0;}
void concatenate_string(char *original, char *add){  while (*original)    original++;
  while (*add)  {    *original = *add;    add++;    original++;  }  *original = '\0';}
  
  
  #include <stdio.h>
const int MAX = 3;
int main(){
  int var[] = {10, 100, 200};  int i, *ptr;
  /* let us have array address in pointer */  ptr = &var[MAX - 1];
  for (i = MAX; i > 0; i--)  {
    printf("Address of var[%d] = %p\n", i, ptr);    printf("Value of var[%d] = %d\n", i, *ptr);
    /* move to the previous location */    ptr--;
  }
  return 0;}
  
  
  #include <stdio.h>
const int MAX = 3;
int main(){
  int var[] = {10, 100, 200};  int i, *ptr;
  /* let us have array address in pointer */  ptr = var;
  for (i = 0; i < MAX; i++)  {
    printf("Address of var[%d] = %p\n", i, ptr);    printf("Value of var[%d] = %d\n", i, *ptr);
    /* move to the next location */    ptr++;
  }
  return 0;}#include <stdio.h>#include <string.h>
struct student_college_detail {  int college_id;  char college_name[50];};
struct student_detail {  int id;  char name[20];  float percentage;
  // structure within structure  struct student_college_detail clg_data;
} stu_data, *stu_data_ptr;
int main(){  struct student_detail stu_data = {1, "Sam", 90.5, 71145, "Anna University"};  stu_data_ptr = &stu_data;
  printf("Id is: %d \n", stu_data_ptr->id);  printf("Name is: %s \n", stu_data_ptr->name);  printf("Percentage is: %f \n\n", stu_data_ptr->percentage);
  printf("College Id is: %d \n", stu_data_ptr->clg_data.college_id);  printf("College Name is: %s \n", stu_data_ptr->clg_data.college_name);
  return 0;}
  
  
  
  #include <stdio.h>
int main(){  int *ptr = NULL;
  printf("The value of ptr is : %p\n", ptr);
  return 0;}#include <stdio.h>
const int MAX = 3;
int main(){
  int var[] = {10, 100, 200};  int i, *ptr;
  /* let us have address of the first element in pointer */  ptr = var;  i = 0;
  while (ptr <= &var[MAX - 1])  {
    printf("Address of var[%d] = %p\n", i, ptr);    printf("Value of var[%d] = %d\n", i, *ptr);
    /* point to the previous location */    ptr++;    i++;
  }
  return 0;}
  
  
  
  #include <stdio.h>
int main(){
  int var;  int *ptr;  int **pptr;
  var = 3000;
  /* take the address of var */  ptr = &var;
  /* take the address of ptr using address of operator & */  pptr = &ptr;
  /* take the value using pptr */  printf("Value of var = %d\n", var);  printf("Value available at *ptr = %d\n", *ptr);  printf("Value available at **pptr = %d\n", **pptr);
  return 0;}#include<stdio.h>
int func(int a, int b){  printf("\n a = %d\n", a);  printf("\n b = %d\n", b);
  return 0;}
int main(void){  // Function pointer  int(*fptr)(int, int);
  // Assign address to function pointer  fptr = func;
  func(2, 3);  fptr(2, 3);
  return 0;}
  
  
  
  #include <stdio.h>
struct person {
  int age;  char *name;
};
int main(){
  struct person first;  struct person *ptr;
  first.age = 21;  char *fullname = "full name";  first.name = fullname;  ptr = &first;
  printf("age=%d, name=%s\n", first.age, ptr->name);}#include<stdio.h>
int main(){  char str[50];  char rev[50];  char *sptr = str;  char *rptr = rev;  int i = -1;
  printf("Enter any string : ");  scanf("%s", str);
  while (*sptr)  {    sptr++;    i++;  }
  while (i >= 0)  {    sptr--;    *rptr = *sptr;    rptr++;    --i;  }
  *rptr = '\0';
  printf("Reverse of string is : %s", rev);
  return 0;}#include <stdio.h>
int main(){  // actual variable declaration  int var = 20;  // pointer variable declaration  int *ip;
  // store address of var in pointer variable  ip = &var;
  printf("Address of var variable: %p\n", &var);
  // address stored in pointer variable  printf("Address stored in ip variable: %p\n", ip);
  // access the value using the pointer  printf("Value of *ip variable: %d\n", *ip);
  return 0;}