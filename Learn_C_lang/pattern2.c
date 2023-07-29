/*
    1
   123
  12345
 1234567
123456789
 1234567
  12345
   123
    1
*/
#include<stdio.h>

int main()
{
    int i, j, k;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<5;j++)
        {
            printf(" ");
        }
        for(k=1;k<(i*2);k++)
        {
                printf("%d",k);
        }
        printf("\n");
    }
    for(i=4;i>=1;i--)
    {
        for(j=5;j>i;j--)
        {
                printf(" ");
        }
        for(k=1;k<(i*2);k++)
        {
                printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}/*
    1
   21
  321
 4321
54321
*/

#include<stdio.h>

int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= 1; j--)
        {
            if (j <= i)
            {
                printf("%d", j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}/*
1 1
12 21
123 321
1234 4321
1234554321
*/

#include<stdio.h>

int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j <= i)
            {
                printf("%d", j);
            }
            else
            {
                printf(" ");
            }
        }
        for (j = 5; j >= 1; j--)
        {
            if (j <= i)
            {
                printf("%d", j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}/*
 1
 21
 321
 4321
 */

#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter number of lines in pattern : ");
    scanf("%d", &n);
    printf("\n");
    for (i = 1; i <= n; i++)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}#include<stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}/*
     1
    232
   34543
  4567654
 567898765

*/

#include <stdio.h>

int main()
{

    int n, c, d, num = 1, space;

    printf("Enter the number of rows ");
    scanf("%d", &n);

    space = n - 1;

    for (d = 1; d <= n; d++)
    {

        num = d;

        for (c = 1; c <= space; c++)
            printf(" ");

        space--;

        for (c = 1; c <= d; c++)
        {

            printf("%d", num);
            num++;

        }

        num--;
        num--;

        for (c = 1; c < d; c++)
        {

            printf("%d", num);
            num--;

        }

        printf("\n");

    }

    return 0;
}/*
   1 
  1 1 
 1 2 1 
1 3 3 1

*/

#include <stdio.h>

long fact(int);

int main()
{

    int line, i, j;

    printf("Enter the no. of lines: ");
    scanf("%d", &line);

    for (i = 0; i < line; i++)
    {

        for (j = 0; j < line - i - 1; j++)
        {

            printf(" ");

        }


        for (j = 0; j <= i; j++)
        {

            printf("%ld ", fact(i) / (fact(j) * fact(i - j)));

        }

        printf("\n");

    }
    return 0;

}

long fact(int num)
{

    long f = 1;
    int i = 1;

    while (i <= num)
    {

        f = f * i;

        i++;
    }

    return f;

}#include<stdio.h>

int main()
{
    int n, c, k, number = 1, space = n;

    printf("Enter number of rows : ");
    scanf("%d", &n);
    printf("\n");
    space = n;

    for (c = 1; c <= n; c++)
    {
        for (k = space; k > 1; k--)
            printf(" ");

        space--;

        for (k = 1; k <= 2 * c - 1; k++)
        {
            if (k <= c)
            {
                printf("%d", number);

                if (k < c)
                    number++;
            }
            else
            {
                number--;
                printf("%d", number);
            }
        }

        number = 1;
        printf("\n");
    }

    return 0;
}#include<stdio.h>

int main()
{
    int x, y, n, a, z, s;

    printf("Enter the limit: ");

    scanf("%d", &n);
    s = n;

    for (x = 0; x <= n; x++)
    {
        a = 1;
        for (z = s; z >= 0; z--)
            printf(" ");

        s--;

        for (y = 0; y <= x; y++)
        {
            printf("%d ", a);
            a = (a * (x - y) / (y + 1));
        }
        printf("\n");
    }
    return 0;
}/*
*
**
***
****
*****
*/

#include <stdio.h>

int main()
{

    int n, c, k;

    printf("Enter number of rows\n");
    scanf("%d", &n);

    for (c = 1; c <= n; c++)
    {

        for (k = 1; k <= c; k++)
            printf("*");

        printf("\n");
    }

    return 0;
}/*
12345
1234
123
12
1
*/
#include<stdio.h>

int main()
{
    int i, j, k, l, n;
    printf("Enter the number of lines to be printed: ");
    scanf("%d", &n);
    printf("\n");
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
            printf("%d", j);

        printf("\n");
    }
    return 0;
}/*
   *
  *A*
 *A*A*
*A*A*A*

*/

#include <stdio.h>

int main()
{

    int n, c, k, space, count = 1;

    printf("Enter number of rows\n");
    scanf("%d", &n);

    space = n;

    for (c = 1; c <= n; c++)
    {

        for (k = 1; k < space; k++)
            printf(" ");

        for (k = 1; k <= c; k++)
        {
            printf("*");

            if (c > 1 && count < c)
            {

                printf("A");
                count++;

            }
        }

        printf("\n");
        space--;
        count = 1;

    }

    return 0;
}#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    int c = 'A';
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", c);
            c = c + 1;
        }
        printf("\n");
    }
    return 0;
}