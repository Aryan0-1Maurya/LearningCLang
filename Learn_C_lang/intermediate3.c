#include<stdio.h>#include<stdlib.h>
int main(){    int choice, num, i;    unsigned long int fact;
    while (1)    {        printf("1.Factorial\n");        printf("2.Prime\n");        printf("3.Odd/Even\n");        printf("4.Exit\n");        printf("\nYour choice?");        scanf("%d", &choice);
        switch (choice)        {            case 1:                printf("\nEnter number:");                scanf("%d", &num);                fact = 1;                for (i = 1; i <= num; i++)                {                    fact = fact * i;                }                printf("\nFactorial value=%lu\n", fact);                break; // Takes control out of switch            case 2:                printf("\nEnter number:");                scanf("%d", &num);
                for (i = 2; i < num; i++)                {                    if (num % i == 0)                    {                        printf("\nNot a prime number.\n");                        break; //Takes control out of for loop                    }                }if (i == num)                {                    printf("\nPrime number.\n");                }
                break; //Takes control out of switch            case 3:                printf("\nEnter number:");                scanf("%d", &num);
                if (num % 2 == 0)                {                    printf("\nEven number.\n");                }                else                {                    printf("\nOdd number.\n");                }                break; //Takes control out of switch            case 4:                exit(0); //Terminates program execution        }    }    return 0;}#include<stdio.h>
int main(){    int milhour, milmin, hours;    char afternoon;
    printf("enter the hours in military time:\n");    scanf("%d", &milhour);
    printf("enter the minutes in military time: \n");    scanf("%d", &milmin);
    if (milhour < 12)    {        hours = milhour;        afternoon = 'A';    }
    if (milhour >= 13)    {        hours = milhour - 12;        afternoon = 'P';    }
    printf("The time in 12 hour format is: ");    printf("%d", hours);    printf(":");    printf("%d", milmin);    printf("%c", afternoon);}#include <stdio.h>
int main(){    char ch;
    // prints single char    for (ch = 'A'; ch <= 'Z'; ch++)    {        putchar(ch);    }
    return (0);}#include <stdio.h>
int main(){    int a;
    printf("Enter an integer : \n");    scanf("%d", &a);
    printf("Integer that you have entered is %d\n", a);
    return 0;}#include <stdio.h>#define decode(s,t,u,m,p,e,d) m##s##u##t#define begin decode(a,n,i,m,a,t,e) int begin(){    printf("Hello World");}#include <stdio.h>
int main(){    int number;
    printf( "Please enter a number: " );    scanf( "%d", &number );    printf( "You entered %d", number );
    return 0;}#include <stdio.h>#include <stdlib.h> int main(){   char ch;    printf("Do you want to shutdown your computer now (y/n) : ");   scanf("%c", &ch);    if (ch == 'y' || ch == 'Y')      system("shutdown -P now");    return 0;}#include <stdio.h>#include <stdlib.h> int main(){   char ch;    printf("Do you want to shutdown your computer now (y/n) : ");   scanf("%c", &ch);    if (ch == 'y' || ch == 'Y')      system("C:\\WINDOWS\\System32\\shutdown /s");    return 0;}#include <stdio.h>#include <stdlib.h> int main(){   char ch;    printf("Do you want to shutdown your computer now (y/n) : ");   scanf("%c", &ch);    if (ch == 'y' || ch == 'Y')      system("C:\\WINDOWS\\System32\\shutdown -s");    return 0;}#include<stdio.h>
int main(){    // local variable definition    char grade = 'B';
    switch (grade)    {        case 'A' :            printf("Excellent!\n");            break;        case 'B' :        case 'C' :            printf("Well done\n");            break;        case 'D' :            printf("You passed\n");            break;        case 'F' :            printf("Better try again\n");            break;        default :            printf("Invalid grade\n");    }
    printf("Your grade is %c\n", grade);
    return 0;}#include<stdio.h>
int get_answer(void){    int c;    int answer = 0;    while ((c = getchar()) != EOF && c != '\n')    {        if (answer == 0 && (c == 'y' || c == 'n'))            answer = c;    }    return answer;}
int main(void){    int F, C;    char line[4096];
    printf("Do you have a Fever? y/n\n");    F = get_answer();
    printf("Do you have a runny nose or cough? y/n\n");    C = get_answer();

    printf("Here are the results you input:\n");    printf("Do you have a fever? %c\n", F);    printf("Do you have a runny nose or cough? %c\n", C);
    return 0;}