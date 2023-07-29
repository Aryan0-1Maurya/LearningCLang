#include <stdio.h>#include <conio.h>int y;add(int m,int n) { if(n==0)    return m;   y=add(m,n-1)+1;   return y; }main() { int a,b,r;   printf("enter the two numbers : ");   scanf("%d%d",&a,&b);   r=add(a,b);   printf("Sum of two no :%d",r);   return 0; }#include <stdio.h>
int power(int n1,int n2);
int main(){    int base, exp;        printf("Enter base number: ");    scanf("%d",&base);        printf("Enter power number(positive integer): ");    scanf("%d",&exp);        printf("%d^%d = %d", base, exp, power(base, exp));    return 0;}int power(int base,int exp){    if ( exp!=1 )        return (base*power(base,exp-1));}#include<stdio.h>
int isPrime(int,int);
int main(){
    int num,prime;
    printf("Enter a positive number: ");    scanf("%d",&num);
    prime = isPrime(num,num/2);
    if(prime==1)        printf("%d is a prime number",num);    else        printf("%d is not a prime number",num);
    return 0;}
int isPrime(int num,int i){    if(i==1)    {        return 1;    }    else    {       if(num%i==0)            return 0;       else            isPrime(num,i-1);    }}#include<stdio.h>#define MAX 100
int getMaxElement(int []);int size;
int main(){
    int arr[MAX],max,i;
    printf("Enter the size of the array: ");    scanf("%d",&size);
    printf("Enter %d elements of an array: ", size);    for(i=0;i<size;i++)      scanf("%d",&arr[i]);
    max=getMaxElement(arr);
    printf("Largest element of an array is: %d",max);
    return 0;}
int getMaxElement(int arr[]){
    static int i=0,max =-9999;
    if(i < size){         if(max<arr[i])           max=arr[i];      i++;      getMaxElement(arr);    }
    return max;}#include<stdio.h>
void printFibonacci(int);
int main(){
    int k,n;    long int i=0,j=1,f;
    printf("Enter the range of the Fibonacci series: ");    scanf("%d",&n);
    printf("Fibonacci Series: ");    printf("%d %d ",0,1);    printFibonacci(n);
    return 0;}
void printFibonacci(int n){
    static long int first=0,second=1,sum;
    if(n>0){         sum = first + second;         first = second;         second = sum;         printf("%ld ",sum);         printFibonacci(n-1);    }
}#include<stdio.h>int fact(int);int main(){  int num,f;    printf("Enter a number: ");  scanf("%d",&num);    f=fact(num);    printf("\nFactorial of %d is: %d",num,f);    return 0;}
int fact(int n){   if(n==1)       return 1;   else       return(n*fact(n-1)); }#include<stdio.h>int main(){  int n1,n2,gcd;  printf("\nEnter two numbers: ");  scanf("%d %d",&n1,&n2);  gcd=findgcd(n1,n2);  printf("GCD of %d and %d is: %d",n1,n2,gcd);  return 0;}int findgcd(int x,int y){     while(x!=y)        {          if(x>y)             return findgcd(x-y,y);          else             return findgcd(x,y-x);        }     return x;}#include<stdio.h>
int lcm(int, int);
int main(){
    int a, b, l;    printf("Enter any two positive integers ");    scanf("%d%d", &a, &b);
    if (a > b)        l = lcm(a, b);    else        l = lcm(b, a);
    printf("LCM of two integers is %d", l);
    return 0;}
int lcm(int a, int b){
    static int temp = 1;
    if (temp % b == 0 && temp % a == 0)        return temp;    temp++;    lcm(a, b);
    return temp;}#include<stdio.h>int checkPalindrome(int);int main(){    int num,sum;
    printf("Enter a number: ");    scanf("%d",&num);
    sum = checkPalindrome(num);
    if(num==sum)         printf("%d is a palindrome",num);    else    printf("%d is not a palindrome",num);
    return 0;}
int checkPalindrome(int num){
    static int sum=0,r;
    if(num!=0){         r=num%10;         sum=sum*10+r;         checkPalindrome(num/10);    }    return sum;}#include<stdio.h>
int main(){
    int n,sum;
    printf("Enter the value of n: ");    scanf("%d",&n);
    sum = getSum(n);
    printf("Sum of n numbers: %d",sum);
    return 0;}
int getSum(n){
    static int sum=0;
    if(n>0)    {        sum = sum + n;        getSum(n-1);    }
    return sum;}