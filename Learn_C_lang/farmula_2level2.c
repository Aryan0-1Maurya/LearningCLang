#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, determinant, real;
    double r1, r2, imag;

    printf("Enter coefficients a, b and c: ");
    scanf("%f%f%f", &a, &b, &c);

    determinant = b * b - 4 * a * c;

    if (determinant > 0)
    {
        r1 = (-b + sqrt(determinant)) / (2 * a);
        r2 = (-b - sqrt(determinant)) / (2 * a);
        printf("Roots are: %.2f and %.2f", r1, r2);
    }
    else if (determinant == 0)
    {
        r1 = r2 = -b / (2 * a);
        printf("Roots are: %.2f and %.2f", r1, r2);
    }
    else
    {
        real = -b / (2 * a);
        imag = sqrt(-determinant) / (2 * a);
        printf("Roots are: %.2f+%.2fi and %.2f-%.2fi", real, imag, real, imag);
    }
    return 0;
}#include<stdio.h>

int gcd(int x, int y)
{
    int i;
    for (i = x; i >= 1; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            break;
        }
    }
    return i;
}

int main()
{
    int x, y = -1;
    printf("Insert numbers. To exit insert zero: ");

    while (1)
    {
        scanf("%d", &x);
        if (x < 1)
            break;
        else if (y == -1)
            y = x;
        else if (x < y)
            y = gcd(x, y);
        else
            y = gcd(y, x);
    }

    printf("GCD is %d", y);

    return 0;
}#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Enter three numbers : ");
    scanf("%f %f %f", &a, &b, &c);

    if (a >= b && a >= c)
        printf("Largest number = %.2f", a);
    if (b >= a && b >= c)
        printf("Largest number = %.2f", b);
    if (c >= a && c >= b)
        printf("Largest number = %.2f", c);

    return 0;
}#include<stdio.h>

int gcd(long a, long b);

int main()
{
    int a, b;

    printf("Enter 2 numbers:");
    scanf("%d%d", &a, &b);

    printf("Greatest Common Divisor is %d", gcd(a, b));

    return 0;
}

int gcd(long a, long b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}#include<stdio.h>

int main()
{
    float x[10], y[10], temp = 1, f[10], sum, p;
    int i, n, j, k = 0, c;

    printf("How many record you will be enter: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n\nenter the value of x%d: ", i);
        scanf("%f", &x[i]);

        printf("\n\nenter the value of f(x%d): ", i);
        scanf("%f", &y[i]);
    }

    printf("\n\nEnter X for finding f(x): ");
    scanf("%f", &p);

    for (i = 0; i < n; i++)
    {
        temp = 1;
        k = i;
        for (j = 0; j < n; j++)
        {
            if (k == j)
            {
                continue;
            }
            else
            {
                temp = temp * ((p - x[j]) / (x[k] - x[j]));
            }
        }
        f[i] = y[i] * temp;
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + f[i];
    }

    printf("\n\nf(%.1f) = %f ", p, sum);
    return 0;
}#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year to check if it is a leap year\n");
    scanf("%d", &year);

    if (year % 400 == 0)
        printf("%d is a leap year.\n", year);
    else if (year % 100 == 0)
        printf("%d is not a leap year.\n", year);
    else if (year % 4 == 0)
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);

    return 0;
}#include <stdio.h>

int maxRepeating(int *arr, int n, int k)
{
    int i = 0;

    // Iterate though input array, for every element
    // arr[i], increment arr[arr[i]%k] by k
    for (i = 0; i < n; i++)
        arr[arr[i] % k] += k;

    // Find index of the maximum repeating element
    int max = arr[0], result = 0;
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            result = i;
        }
    }

    // Return index of the maximum element
    return result;
}

int main()
{
    int arr[] = {2, 3, 3, 5, 3, 4, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 8;

    printf("The maximum repeating number is %d", maxRepeating(arr, n, k));

    return 0;
}#include <stdio.h>

long factorial(int);

long find_ncr(int, int);

long find_npr(int, int);

int main()
{

    int n, r;
    long ncr, npr;

    printf("Enter the value of n and r\n");
    scanf("%d%d", &n, &r);

    ncr = find_ncr(n, r);
    npr = find_npr(n, r);

    printf("%dC%d = %ld\n", n, r, ncr);
    printf("%dP%d = %ld\n", n, r, npr);

    return 0;
}

long find_ncr(int n, int r)
{

    long result;

    result = factorial(n) / (factorial(r) * factorial(n - r));

    return result;
}

long find_npr(int n, int r)
{

    long result;

    result = factorial(n) / factorial(n - r);

    return result;
}

long factorial(int n)
{

    int c;
    long result = 1;

    for (c = 1; c <= n; c++)
        result = result * c;

    return (result);
}#include<stdio.h>
#include<math.h>

int user_power, i = 0, cnt = 0, flag = 0;
int coef[10] = {0};
float x1 = 0, x2 = 0, t = 0;
float fx1 = 0, fdx1 = 0;

int main()
{
    printf("PROGRAM FOR NEWTON RAPHSON GENERAL");

    printf("\nEnter the total no. of power : ");
    scanf("%d", &user_power);

    for (i = 0; i <= user_power; i++)
    {
        printf("\nx^%d : ", i);
        scanf("%d", &coef[i]);
    }

    printf("\n");

    printf("\n\nThe Polynomial is ");

    //printing coeff.
    for (i = user_power; i >= 0; i--)
    {
        printf("%dx^%d", coef[i], i);
    }

    printf("\n\nIntial x1 -> ");
    scanf("%f", &x1);

    printf("Iteration\tX1\tFX1\tF'X1");

    do
    {
        cnt++;
        fx1 = fdx1 = 0;
        for (i = user_power; i >= 1; i--)
        {
            fx1 += coef[i] * (pow(x1, i));
        }

        fx1 += coef[0];

        for (i = user_power; i >= 0; i--)
        {
            fdx1 += coef[i] * (i * pow(x1, (i - 1)));
        }

        t = x2;
        x2 = (x1 - (fx1 / fdx1));
        x1 = x2;

        printf("\n\t%d\t%.3f\t%.3f\t%.3f ", cnt, x2, fx1, fdx1);

    }
    while ((fabs(t - x1)) >= 0.0001);

    printf("\n\nThe root of equation is %f", x2);

    return 0;
}#include <stdio.h>
#include <math.h>

int main()
{

    long int octal, decimal = 0;
    int i = 0;

    printf("Enter any octal number: ");
    scanf("%ld", &octal);
    
    while (octal != 0)
    {
        decimal = decimal + (octal % 10) * pow(8, i++);
        octal = octal / 10;
    }
    printf("Equivalent decimal value: %ld", decimal);
    return 0;
}#include <stdio.h>

int main()
{
    //variable declaration
    int i, number;

    //take user input
    printf("Enter a number : ");
    scanf("%d", &number);

    //loop to check number is perfect square or not
    for (i = 0; i <= number; i++)
    {
        if (number == i * i)
        {
            printf("\nEntered number is perfect square\n");
            return 0;
        }
    }

    printf("\nEntered number is not perfect square\n");
    return 0;
}#include <stdio.h>
#include <math.h>

int main()
{
    //variable declaration
    float a, b, c, determinant, realpart;
    double root1, root2, imaginarypart;

    //take user input
    printf("Enter coefficients of a, b and c : ");
    scanf("%f%f%f", &a, &b, &c);
    determinant = b * b - 4 * a * c;

    //if -else checking to find roots of quadratic equation
    if (determinant > 0)
    {
        root1 = (-b + sqrt(determinant)) / (2 * a);
        root2 = (-b - sqrt(determinant)) / (2 * a);
        printf("Roots are : %.2f and %.2f", root1, root2);
    }
    else if (determinant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("Roots are : %.2f and %.2f", root1, root2);
    }
    else
    {
        realpart = -b / (2 * a);
        imaginarypart = sqrt(-determinant) / (2 * a);
        printf("Roots are : %.2f+%.2fi and %.2f-%.2fi", realpart, imaginarypart, realpart, imaginarypart);
    }

    return 0;
}#include<stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three number : ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c) if (b > c)
        printf("%d is the second largest no.", b);
    else
        printf("%d is the second largest no.", c);

    if (b > a && b > c) if (a > c)
        printf("%d is the second largest no.", a);
    else
        printf("%d is the second largest no.", c);


    if (c > a && c > b) if (b > a)
        printf("%d is the second largest no.", b);
    else
        printf("%d is the second largest no.", a);

    return 0;
}#include <stdio.h>

int main()
{
    float principal_amt, rate;
    double simple_interest;
    int time;

    printf("Enter the values of principal_amt, rate and time \n");
    scanf("%f %f %d", &principal_amt, &rate, &time);

    simple_interest = (principal_amt * rate * time) / 100.0;

    printf("Amount = Rs. %5.2f\n", principal_amt);
    printf("Rate = Rs. %5.2f\n", rate);
    printf("Time = %d years\n", time);
    printf("Simple interest = %5.2f\n", simple_interest);

    return 0;
}#include<stdio.h>

float f(float x)
{
    return (1 / (1 + x));
}

int main()
{
    int i, n;
    float x0, xn, h, y[20], so, se, ans, x[20];
    printf("\nEnter values of x0,xn,h: ");
    scanf("%f%f%f", &x0, &xn, &h);
    n = (xn - x0) / h;
    if (n % 2 == 1)
    {
        n = n + 1;
    }

    h = (xn - x0) / n;

    printf("\nRefined value of n and h are:%d and %f\n", n, h);
    printf("\n Y values: \n");

    for (i = 0; i <= n; i++)
    {
        x[i] = x0 + i * h;
        y[i] = f(x[i]);
        printf("\n %f\n", y[i]);
    }

    so = 0;
    se = 0;
    for (i = 1; i < n; i++)
    {
        if (i % 2 == 1)
        {
            so = so + y[i];
        }
        else
        {
            se = se + y[i];
        }

    }
    ans = h / 3 * (y[0] + y[n] + 4 * so + 2 * se);
    printf("\nFinal integration is %f", ans);
    
    return 0;
}#include<stdio.h>

int main()
{
    int sum = 0, n;

    printf("Enter the number : ");
    scanf("%d", &n);

    // Using Math formula
    // (n/2)((n / 2) + 1)
    sum = ((n / 2) * ((n / 2) + 1));

    printf("Sum of even numbers between 1 to %d : %d", n, sum);

    return 0;
}#include<stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("\nEnter temp in Celsius : ");
    scanf("%f", &celsius);

    fahrenheit = (1.8 * celsius) + 32;
    printf("\nTemperature in Fahrenheit : %f ", fahrenheit);

    return (0);
}