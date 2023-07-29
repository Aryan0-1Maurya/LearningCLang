/*at first we have to create file1.txt in the same directory and write something in that file1.txt so that it will be copied to the other file*//* here file1.txt is a already created and defined file*/#include<stdio.h>int main(){ FILE *filepointer1,*filepointer2; char a; filepointer1=fopen("file1.txt","r");  filepointer2=fopen("file2.txt","w");	 do {  a=fgetc(filepointer1);  fputc(a,filepointer2); } while(a!=EOF);	 if (filepointer2)  {  while (fscanf(file2, "%s", a)!=EOF)  printf("%s",a);  fclose(filepointer1);  fclose(filepointer2); } Printf("file contents are successfully copied"); return(0);}#include<stdio.h>int main(){   FILE *fp;   char ch;   int nol=0,not=0,nos=0,noc=0;   fp=fopen(“animesh.txt”,”r”);   while(1)   {      ch=fgetc(fp);      if(ch==EOF)      break;      noc++;      if(ch==’ ‘)      nos++;      if(ch==’\n’)      nol++;      if(ch==’\t’)      not++;   }   fclose(fp);   printf(“\n Number of characters = %d”,noc);   printf(“\n Number of spaces = %d”,nos);   printf(“\n Number of tabs = %d”,not);   printf(“\n Number of lines = %d”,nol);   getch();}#include <stdio.h>#include <stdlib.h>
int main(){    FILE *fptr;    char filename[15];    char ch;
    printf("Enter the filename to be opened : ");    scanf("%s", filename);
    /* open the file for reading */    fptr = fopen(filename, "r");    if (fptr == NULL)    {        printf("Cannot open file \n");        exit(0);    }    printf("Reading %s File\n",filename);    ch = fgetc(fptr);    while (ch != EOF)    {        printf ("%c", ch);        ch = fgetc(fptr);    }    fclose(fptr);
    return 0;}#include<stdio.h>
int main(){    FILE *fptr;    char name[20];    int age;    float salary;
    //add employee record in file    fptr = fopen("emp_record.txt", "a+");
    printf("Enter the name : ");    scanf("%s", name);    fprintf(fptr, "Name = %s\n", name);    printf("Enter the age : ");    scanf("%d", &age);    fprintf(fptr, "Age = %d\n", age);    printf("Enter the salary : ");    scanf("%f", &salary);    fprintf(fptr, "Salary = %.2f\n\n", salary);    fclose(fptr);
    return 0;}#include<stdio.h>
int sumf(int a, int b){    int sum;    sum = a + b;    return sum;}
int main(){    int a, b;    int sumf(int, int);    printf("Enter the values of a and b:");    scanf("%d%d", &a, &b);    printf("\nThe sum of two numbers is done by function with argument and with return value - sum : ");    printf("%d", sumf(a, b));    return 0;}#include <stdio.h>#include <string.h>
int main(){    //variable declaration    char str1[100], str2[100];
    //take user input    printf("Enter first string : ");    gets(str1);
    printf("Enter second string : ");    gets(str2);
    //use of strcmp function for comparison    if (strcmp(str1, str2) == 0)        printf("Entered strings are equal.\n");    else        printf("Entered strings are not equal.\n");
    return 0;}#include <stdio.h>#include <string.h>
int main(){    char str1[] = "hello";    char str2[100];    char str3[1000];    strcpy(str2, str1);    strcpy(str3, "how are you?");    printf("str1 : %s\nstr2 : %s\nstr3 : %s\n", str1, str2, str3);    return 0;}