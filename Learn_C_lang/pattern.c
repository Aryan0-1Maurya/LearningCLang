/*
1
01
101
0101
10101
*/
#include<stdio.h>

int main()
{
    int i, j;
    int count = 1;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", count++ % 2);
            if (j == i && i != 5)
                printf("\n");
        }

        if (i % 2 == 0)
            count = 1;
        else
            count = 0;
    }
    return (0);
}/*

  *
 ***
*****
 ***
  *
  
*/

#include <stdio.h>

int main()
{

    int n, c, k, space = 1;

    printf("Enter number of rows\n");
    scanf("%d", &n);

    space = n - 1;

    for (k = 1; k <= n; k++)
    {

        for (c = 1; c <= space; c++)
            printf(" ");

        space--;

        for (c = 1; c <= 2 * k - 1; c++)
            printf("*");

        printf("\n");
    }

    space = 1;

    for (k = 1; k <= n - 1; k++)
    {

        for (c = 1; c <= space; c++)
            printf(" ");

        space++;

        for (c = 1; c <= 2 * (n - k) - 1; c++)
            printf("*");

        printf("\n");
    }

    return 0;
}/*
    1
   222
  33333
 4444444
555555555
 4444444
  33333
   222
    1
*/

#include<stdio.h>

int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (j = i; j < 5; j++)
        {
            printf(" ");
        }
        for (k = 1; k < (i * 2); k++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    for (i = 4; i >= 1; i--)
    {
        for (j = 5; j > i; j--)
        {
            printf(" ");
        }
        for (k = 1; k < (i * 2); k++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}/*
      *
     * *
    * *
   * *
  * *
   * *
    * *
     * *
      *    
*/

#include<stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j > i; j--)
        {
            printf(" ");
        }

        printf("*");

        for (j = 1; j < (i - 1) * 2; j++)
        {
            printf(" ");
        }

        if (i == 1)
        {
            printf("\n");
        }

        else
        { printf("*\n"); }
    }

    for (i = 4; i >= 1; i--)
    {
        for (j = 5; j > i; j--)
        {
            printf(" ");
        }

        printf("*");

        for (j = 1; j < (i - 1) * 2; j++)
        {
            printf(" ");
        }

        if (i == 1)
        {
            printf("\n");
        }
        else
        { printf("*\n"); }
    }

    return 0;
}/*
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 21 
22 23 24 25 26 27 28
*/

#include <stdio.h>

int main() {

    int n, i, c, a = 1;

    printf("Enter the number of rows of Floyd's triangle to print\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        for (c = 1; c <= i; c++) {

            printf("%d ", a);
            a++;

        }

        printf("\n");
    }

    return 0;
}/*
**********
**** ****
*** ***
** **
* *
** **
*** ***
**** ****
**********
*/

#include <stdio.h>

int main()
{
    int i, j, k;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf("*");
        }

        for (k = 1; k < i; k++)
        {
            printf(" ");
        }

        for (j = 1; j <= 6 - i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    
    for (i = 2; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        for (k = 1; k <= 5 - i; k++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter value of n : ");
    scanf("%d", &n);
    printf("\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i != 1 && i != n && j != 1 && j != n)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}/*
 *********
  *******
   *****
    ***
     *
    ***
   *****
  *******
 *********
*/

#include<stdio.h>

int main()
{
    int num, n, r, c, sp;

    printf("Enter number of rows: ");
    scanf("%d", &num);
    printf("\n");

    n = num;

    for (r = 1; r <= num; r++)
    {
        for (sp = 1; sp <= r; sp++)
            printf(" ");

        for (c = 1; c <= n; c++)
            printf("*");

        for (c = num - r; c >= 1; c--)
            printf("*");

        n--;
        printf("\n");
    }

    for (r = 2; r <= num; r++)
    {
        for (sp = num - r + 1; sp >= 1; sp--)
            printf(" ");

        for (c = 1; c <= r; c++)
            printf("*");

        for (c = r - 1; c >= 1; c--)
            printf("*");

        printf("\n");
    }

    return 0;
}/*
#####*#####
####*#*####
###*###*###
##*#####*##
#*#######*#
*#########*
*/
#include<stdio.h>

int main()
{
    int n = 5, r, c;

    for (r = 1; r <= 6; r++, n--)
    {
        // first pyramid
        for (c = 1; c <= n; c++)
        {
            printf(" #");
        }

        // second pyramid
        for (c = 1; c <= r; c++)
        {
            if (c == 1)
            {
                printf(" *");
            }
            else
            {
                printf(" #");
            }
        }

        // third pyramid
        for (c = r; c > 1; c--)
        {
            if (c == 2)
            {
                printf(" *");
            }
            else
            {
                printf(" #");
            }
        }

        // fourth pyramid
        for (c = n; c >= 1; c--)
        {
            printf(" #");
        }

        printf("\n");
    }

    return 0;
}/*
1
A B
2 3 4
C D E F
5 6 7 8 9
G H I J K L
*/
#include<stdio.h>

int main()
{
    int num, r, c;
    int i = 1;
    char ch = 'A';

    printf("Enter no. of rows : ");
    scanf("%d", &num);
    printf("\n");
    for (r = 1; r <= num; r++)
    {
        for (c = 1; c <= r; c++)
        {
            if (r % 2 == 0)
            {
                printf(" %c", ch++);
            }
            else
            {
                printf(" %d", i++);
            }
        }

        printf("\n");
    }

    return 0;
}