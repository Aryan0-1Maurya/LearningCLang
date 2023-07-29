#include <stdlib.h>#include <stdio.h>#include <time.h>
#define MAX_BUF 50
int main(void){    char buf[MAX_BUF];    time_t seconds = time(NULL);    struct tm *now = localtime(&seconds);
    const char *months[] = {            "January", "February",            "March", "April", "May", "June",            "July", "August", "September",            "October", "November", "December"    };
    const char *days[] = {            "Sunday", "Monday",            "Tuesday", "Wednesday",            "Thursday", "Friday", "Saturday"    };
    (void) printf("%d-%d-%d\n", now->tm_year + 1900, now->tm_mon + 1, now->tm_mday);    (void) printf("%s, %s %d, %d\n", days[now->tm_wday], months[now->tm_mon],                  now->tm_mday, now->tm_year + 1900);
    // using the strftime (the result depends on the locale)    (void) strftime(buf, MAX_BUF, "%A, %B %e, %Y", now);    (void) printf("%s\n", buf);    return EXIT_SUCCESS;}#include <stdio.h>
struct TIME{    int seconds;    int minutes;    int hours;};
void Difference(struct TIME t1, struct TIME t2, struct TIME *diff);
int main(){    struct TIME t1, t2, diff;    printf("Enter start time: \n");    printf("Enter hours, minutes and seconds respectively: ");    scanf("%d%d%d", &t1.hours, &t1.minutes, &t1.seconds);
    printf("Enter stop time: \n");    printf("Enter hours, minutes and seconds respectively: ");    scanf("%d%d%d", &t2.hours, &t2.minutes, &t2.seconds);
    Difference(t1, t2, &diff);
    printf("\nTIME DIFFERENCE: %d:%d:%d - ", t1.hours, t1.minutes, t1.seconds);    printf("%d:%d:%d ", t2.hours, t2.minutes, t2.seconds);    printf("= %d:%d:%d\n", diff.hours, diff.minutes, diff.seconds);
    return 0;}
void Difference(struct TIME t1, struct TIME t2, struct TIME *differ){    if (t2.seconds > t1.seconds)    {        --t1.minutes;        t1.seconds += 60;    }
    differ->seconds = t1.seconds - t2.seconds;
    if (t2.minutes > t1.minutes)    {        --t1.hours;        t1.minutes += 60;    }
    differ->minutes = t1.minutes - t2.minutes;    differ->hours = t1.hours - t2.hours;}#include<stdio.h>#include<time.h>
int main(){    time_t t;    time(&t);
    printf("Today's date and time : %s", ctime(&t));
    return 0;}#include <stdlib.h>#include <stdio.h>#include <time.h>
#define MAX_BUF 50
int main(void){    char buf[MAX_BUF];    time_t seconds = time(NULL);    struct tm *now = localtime(&seconds);
    const char *months[] = {            "January", "February",            "March", "April", "May", "June",            "July", "August", "September",            "October", "November", "December"    };
    const char *days[] = {            "Sunday", "Monday",            "Tuesday", "Wednesday",            "Thursday", "Friday", "Saturday"    };
    (void) printf("%d-%d-%d\n", now->tm_year + 1900, now->tm_mon + 1, now->tm_mday);    (void) printf("%s, %s %d, %d\n", days[now->tm_wday], months[now->tm_mon],                  now->tm_mday, now->tm_year + 1900);
    // using the strftime (the result depends on the locale)    (void) strftime(buf, MAX_BUF, "%A, %B %e, %Y", now);    (void) printf("%s\n", buf);    return EXIT_SUCCESS;}#include<stdio.h>#include<time.h>
int main(){    time_t t;    time(&t);
    printf("Today's date and time : %s", ctime(&t));
    return 0;}#include <stdio.h>
int main (){    printf ("audible alert (bell) BEL \\a %d\n" , '\a');    printf ("backspace BS \\b %d\n" , '\b');    printf ("horizontal tab HT \\t %d\n" , '\t');    printf ("newline LF \\n %d\n" , '\n');    printf ("vertical tab VT \\v %d\n" , '\v');    printf ("formfeed FF \\f %d\n" , '\f');    printf ("carriage return CR \\r %d\n" , '\r');    printf ("double quote \" \\\" %d\n", '\"');    printf ("single quote \' \\\' %d\n", '\'');    printf ("question mark ? \\? %d\n" , '\?');    printf ("backslash \\ \\\\ %d\n", '\\');
    return 0;}#include <stdio.h>
const char *wd(int year, int month, int day){  static const char *weekdayname[] = {"Monday", "Tuesday",        "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};  size_t JND = \          day \        + ((153 * (month + 12 * ((14 - month) / 12) - 3) + 2) / 5) \        + (365 * (year + 4800 - ((14 - month) / 12))) \        + ((year + 4800 - ((14 - month) / 12)) / 4) \        - ((year + 4800 - ((14 - month) / 12)) / 100) \        + ((year + 4800 - ((14 - month) / 12)) / 400) \        - 32045;  return weekdayname[JND % 7];}
int main(){  int year, month, date;
  printf("Enter Year : ");  scanf("%d",&year);  printf("\nEnter Month : ");  scanf("%d",&month);  printf("\nEnter Date : ");  scanf("%d",&date);
  printf("\n%d-%02d-%02d: %s\n", year, month, date, wd(year, month, date));
  return 0;}#include<stdio.h>
// Global variable declarationint a, b;
int main(){    printf("enter the two values to find the greatest number : ");    scanf("%d%d", &a, &b);
    //logic to find the largest and smallest numbers    if (a < b)    {        printf("\nthe largest number is : %d", b);        printf("\nthe Smallest number is : %d", a);    }    else if (a == b)    {        printf("Both are Equal");    }    else    {        printf("\nthe largest number is : %d", a);        printf("\nthe Smallest number is : %d", b);    }
    return 0;}#include <stdio.h>
int main(){    int i = 1;    for (i = 1; i <= 100; i++)    {        if (i % 15 == 0)        {            printf("FizzBuzz\n");        }        else if (i % 3 == 0)        {            printf("Fizz\n");        }        else if (i % 5 == 0)        {            printf("Buzz\n");        }        else        {            printf("%d\n", i);        }    }    return 0;}#include <stdio.h>
int main(){    //variable declaration    double number, sum = 0, i;
    //take user input    printf("Enter the number : ");    scanf("%lf", &number);
    for (i = 1; i <= number; i++)    {        sum = sum + (1 / i);
        if (i == 1)        {            printf("\n1 +");        }        else if (i == number)        {            printf(" (1 / %1f)", i);        }        else        {            printf(" (1 / %1f) + ", i);        }    }
    //display output    printf("\n\nThe sum of series is : %.2lf ", sum);    printf("\n");
    return 0;}#include <stdio.h>
int main(){ int number;
 printf("Please enter a number: "); scanf("%d", &number);
 if (number < 100) {  printf("\nNumber is less than 100!"); } else if (number == 100) {  printf("\nNumber is 100!"); } else {  printf("\nNumber is greater than 100!");    }
 return 0;}#include <stdio.h>
int main(){   char str[50];
   printf("Enter a string with space: ");   gets(str);
   printf("You entered: %s", str);
   return(0);}