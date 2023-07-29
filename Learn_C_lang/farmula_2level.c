#include <stdio.h>
int main(){    int first, second, *p, *q, sum;
    printf("Enter two integers to add\n");    scanf("%d%d", &first, &second);
    p = &first;    q = &second;
    sum = *p + *q;
    printf("Sum of entered numbers = %d\n", sum);
    return 0;}#include <stdio.h>
int main(){    int first, second, add, subtract, multiply;    float divide;
    printf("Enter two integers\n");    scanf("%d%d", &first, &second);
    add = first + second;    subtract = first - second;    multiply = first * second;        //typecasting    divide = first / (float) second;
    printf("Sum = %d\n", add);    printf("Difference = %d\n", subtract);    printf("Multiplication = %d\n", multiply);    printf("Division = %.2f\n", divide);
    return 0;}#include <stdio.h>
int main(){    int input, firstNumber, lastNumber;    printf("Enter number : ");    scanf("%d", &input);
    lastNumber = input % 10;    firstNumber = input;
    while (firstNumber >= 10)        firstNumber /= 10;
    printf("Addition of first and last number , %d + %d = %d",           firstNumber, lastNumber, firstNumber + lastNumber);
    return 0;}#include<stdio.h>#include<math.h>
int main(){    double a, b, c, s, area;
    printf("\nEnter the sides of triangle: \n");    scanf("%lf%lf%lf", &a, &b, &c);
    s = (a + b + c) / 2;    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("\nArea of triangle using Heron's Formula: %.2lf\n", area);
    return 0;}#include<stdio.h>
int main(){
    int rad;    float PI = 3.14, area, ci;
    printf("\nEnter radius of circle: ");    scanf("%d", &rad);
    area = PI * rad * rad;    printf("\nArea of circle : %f ", area);
    ci = 2 * PI * rad;    printf("\nCircumference : %f ", ci);
    return 0;}#include<stdio.h>
int main(){    int h, b;    float area;    printf("Enter the height of the triangle : ");    scanf("%d", &h);    printf("Enter the base of the triangle : ");    scanf("%d", &b);
    // formula for area of the triangle    area = (h * b) / 2;
    printf("The area of the triangle is: ");    printf("%f", area);    return 0;}#include <stdio.h>#include <math.h>
int binary_decimal(int n);
int main(){    int n;    char c;
    printf("Enter a binary number: ");    scanf("%d", &n);    printf("%d in binary = %d in decimal", n, binary_decimal(n));
    return 0;}
//Function to convert binary to decimal.int binary_decimal(int n){    int decimal = 0, i = 0, rem;    while (n != 0)    {        rem = n % 10;        n /= 10;        decimal += rem * pow(2, i);        ++i;    }    return decimal;}#include<stdio.h>#include<math.h>
double F(double x){    //This return the value of the function    return (pow(x, 3) + 3 * x - 5);}
int main(){    printf("This program illustrates the bisection method in C\n");    printf("x^3 + 3*x - 5 = 0\n");
    double x0, x1;
    printf("Enter the first approximation to the root : ");    scanf("%lf", &x0);    printf("Enter the second approximation to the root : ");    scanf("%lf", &x1);
    int iter;
    printf("Enter the number of iterations you want to perform : ");    scanf("%d", &iter);
    int ctr = 1;    double l1 = x0;    double l2 = x1;    double r, f1, f2, f3;
    //We check if the initial approximations are the root or not    if (F(l1) == 0)        r = l1;    else if (F(l2) == 0)        r = l2;    else    {        while (ctr <= iter)        {            //this is an implementation of the algorithm mentioned above            f1 = F(l1);            r = (l1 + l2) / 2.0;            f2 = F(r);            f3 = F(l2);            if (f2 == 0)            {                r = f2;                break;            }            printf("The root after %d iteration is %lf\n", ctr, r);            if (f1 * f2 < 0)                l2 = r;            else if (f2 * f3 < 0)                l1 = r;            ctr++;        }    }
    printf("\nThe approximation to the root is %lf", r);        return 0;}#include <stdio.h>#include <math.h>
#define MAXSIZE 100
int main(){    //variable declaration    float nuArr[MAXSIZE];    int i, size;    float mean, sum = 0;    double variance,sum1 = 0,standardDeviation;
    //take user input    printf("Enter how many numbers you want to calculate : ");    scanf("%d", &size);
    //take input for numbers    printf("Enter %d distinct numbers \n", size);

    for (i = 0; i < size; i++)    {        scanf("%f", &nuArr[i]);    }
    //calculate the mean of all elements    for (i = 0; i < size; i++)    {        sum = sum + nuArr[i];    }
    mean = sum / (float) size;
    //calculate variance and standard deviation */    for (i = 0; i < size; i++)    {        sum1 = sum1 + pow((nuArr[i] - mean), 2);    }
    variance = sum1 / (float) size;

    standardDeviation = sqrt(variance);
    //display Mean standard deviation and variance of all elements    printf("Mean of all elements : %.2f\n", mean);    printf("variance of all elements : %.2f\n", variance);    printf("Standard deviation : %.2f\n", standardDeviation);
    return 0;}#include<stdio.h>#include<ctype.h>
#define MAX 50
typedef struct stack {    int data[MAX];    int top;} stack;
int precedence(char);
void init(stack *);
int empty(stack *);
int full(stack *);
int pop(stack *);
void push(stack *, int);
//value of the top elementint top(stack *);
void infix_to_postfix(char infix[], char postfix[]);
int main(){    char infix[30], postfix[30];    printf("Enter an infix expression(eg: 5+2*4): ");    gets(infix);    infix_to_postfix(infix, postfix);    printf("\nPostfix expression: %s", postfix);    return 0;}
void infix_to_postfix(char infix[], char postfix[]){    stack s;    char x, token;    int i, j; //i-index of infix,j-index of postfix    init(&s);    j = 0;
    for (i = 0; infix[i] != '\0'; i++)    {        token = infix[i];        if (isalnum(token))        {            postfix[j++] = token;        }        else if (token == '(')        {            push(&s, '(');        }        else if (token == ')')        {            while ((x = pop(&s)) != '(')            {                postfix[j++] = x;            }        }        else        {            while (precedence(token) <= precedence(top(&s)) && !empty(&s))            {                x = pop(&s);                postfix[j++] = x;            }            push(&s, token);        }    }while (!empty(&s))    {        x = pop(&s);        postfix[j++] = x;    }
    postfix[j] = '\0';}
int precedence(char x){    if (x == '(')        return (0);    if (x == '+' || x == '-')        return (1);    if (x == '*' || x == '/' || x == '%')        return (2);
    return (3);}
void init(stack *s){    s->top = -1;}
int empty(stack *s){    if (s->top == -1)        return (1);
    return (0);}
int full(stack *s){    if (s->top == MAX - 1)        return (1);
    return (0);}
void push(stack *s, int x){    s->top = s->top + 1;    s->data[s->top] = x;}
int pop(stack *s){    int x;    x = s->data[s->top];    s->top = s->top - 1;    return (x);}
int top(stack *p){    return (p->data[p->top]);}#include <stdio.h>
int main(){    int n, c, k;
    printf("Enter an integer in decimal number system\n");    scanf("%d", &n);
    printf("%d in binary number system is:\n", n);
    for (c = 31; c >= 0; c--)    {        k = n >> c;        if (k & 1)        {            printf("1");        }        else        {            printf("0");        }    }
    printf("\n");
    return 0;}