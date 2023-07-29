/*

*****
****
***
**
*

*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the no of rows ");
    scanf("%d", &n);
    printf("\n");
    int i, j;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}/*

* *
** **
*** ***
**** ****

*/
#include<stdio.h>

int main()
{
    int i, j, k, l, n;
    printf("Enter the number of lines to be printed: ");
    scanf("%d", &n);
    printf("\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            printf("*");
        for (k = i; k <= i; k++)
            printf(" ");
        for (l = 1; l <= i; l++)
            printf("*");

        printf("\n");
    }

    return 0;
}#include <stdio.h>

int main()
{
    int i, j, a = 0, n;
    printf("Enter number of lines for pattern : ");
    scanf("%d", &n);
    printf("\n");
    for (j = 1; j <= n; j++)
    {
        for (i = 1; i <= n; i++)
        {
            if (j == i)
                printf("%d ", a);
            else
                printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}/*
*
* *
* * *
* * * *
* * * * *
*/
#include<stdio.h>

int main()
{
    int n = 0, i, j;
    printf("Enter number of lines for pattern : ");
    scanf("%d", &n);
    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}/*
         *
       * *
     * * *
   * * * *
 * * * * *
*/

#include<stdio.h>

int main()
{
    char ch = '*';
    int n;
    int i, j, no_of_spaces = 0, spaceCount;

    printf("Enter number of lines for pattern : ");
    scanf("%d", &n);
    printf("\n");
    no_of_spaces = n - 1;
    for (i = 1; i <= n; i++)
    {
        for (spaceCount = no_of_spaces; spaceCount >= 1; spaceCount--)
        {
            printf(" "); //2 spaces
        }
        for (j = 1; j <= i; j++)
        {
            printf("%2c", ch);
        }

        printf("\n");
        no_of_spaces--;
    }

    return 0;
}/*
     *
    ***
   *****
  *******
 *********
*/

#include <stdio.h>

int main()
{

    int row, c, n, temp;

    printf("Enter the number of rows in pyramid of stars you wish to see ");
    scanf("%d", &n);

    temp = n;

    for (row = 1; row <= n; row++)
    {

        for (c = 1; c < temp; c++)
            printf(" ");

        temp--;

        for (c = 1; c <= 2 * row - 1; c++)
            printf("*");

        printf("\n");

    }

    return 0;
}#include<stdio.h>

int main()
{
    int num, c, sp, r = 1;

    printf("Enter loop repeat number(rows): ");
    scanf("%d", &num);

    printf("\n");
    for (; num >= 1; num--, r++)
    {
        for (c = 1; c <= num; c++)
        {
            printf("%d", c);
        }

        for (sp = r; sp > 1; sp--)
        {
            printf("_");
        }

        for (sp = r; sp > 1; sp--)
        {
            printf("_");
        }

        for (c = num; c >= 1; c--)
        {
            printf("%d", c);
        }

        printf("\n");
    }

    return 0;
}#include <stdio.h>

//main method declaration
int main()
{
    //variable declaration
    int i, j, n, m;

    //take user input for rows and columns
    printf("Enter a number of rows : ");
    scanf("%d", &n);
    printf("\nEnter a number of columns : ");
    scanf("%d", &m);
    printf("\n");
    //iterate over each row
    for (i = 1; i <= n; i++)
    {
        //iterate over columns of each rows
        for (j = 1; j <= m; j++)
        {
            printf("*");
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
*/

#include <stdio.h>

int main()
{
    int i, j, k;

    for (i = 5; i >= 1; i--)
    {
        for (j = 5; j > i; j--)
        {
            printf(" ");
        }

        for (k = 1; k < (i * 2); k++)
        {
            printf("*");
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
*/

#include <stdio.h>

int main()
{
    int i, j, k;

    for (i = 5; i >= 1; i--)
    {
        for (j = 5; j > i; j--)
        {
            printf(" ");
        }

        for (k = 1; k < (i * 2); k++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}/*
    1 1
   2 2
  3 3
 4 4
5 5
 4 4
  3 3
   2 2
    1 1
*/

#include<stdio.h>

int main()
{
    int num, r, c, sp, n;

    printf("Enter maximum number : ");
    scanf("%d", &num);

    for (r = 1; r <= num; r++)
    {
        for (sp = num - r; sp >= 1; sp--)
            printf(" ");

        printf("%d", r);

        for (sp = r * 2; sp > 1; sp--)
            printf(" ");

        printf("%d", r);
        printf("\n");
    }

    for (r = 1, n = num - 1; r < num; r++, n--)
    {
        for (sp = r; sp >= 1; sp--)
            printf(" ");

        printf("%d", n);

        for (sp = n * 2; sp > 1; sp--)
            printf(" ");

        printf("%d", n);
        printf("\n");
    }

    return 0;
}/*
      1
    2 2
  3 3
4 4
  3 3
    2 2
      1
*/
#include<stdio.h>

int main()
{
    int i, j, k;
    for (i = 1; i <= 4; i++)
    {
        for (j = 4; j >= (i - 1) * 2 - 1; j--)
            printf(" ");
        printf("%d", i);
        for (j = 2; j <= (i - 1) * 4; j++)
            printf(" ");
        if (i > 1)
            printf("%d", i);
        printf("\n");
    }
    for (i = 3; i >= 1; i--)
    {
        for (j = 4; j >= (i - 1) * 2 - 1; j--)
            printf(" ");
        printf("%d", i);
        for (j = 2; j <= (i - 1) * 4; j++)
            printf(" ");
        if (i > 1)
            printf("%d", i);
        printf("\n");
    }
    return 0;
}#include <stdio.h>

//declaration of main
int main()
{
    int i, j, n;

    printf("Enter a number of rows : ");
    scanf("%d", &n);
    printf("\n");
    //iterate over each row
    for (i = 1; i <= n; i++)
    {
        //print columns of each row
        for (j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}#include <stdio.h>

//declaration of main
int main()
{
    int i, j, n;

    printf("Enter a number of rows : ");
    scanf("%d", &n);
    printf("\n");
    //iterate over each row
    for (i = 1; i <= n; i++)
    {
        //print columns of each row
        for (j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}#include <stdio.h>

void drawTriangle(char border, char filler, int length)
{
    int start = 2;
    int base = 4;
    int i, sp, j, b;
    for (i = start; i <= length; i++)
    {
        for (sp = 0; sp <= length - i; sp++)
        {
            printf(" ");
        }
        if (i > start)
        {
            printf("%c ", border);
        }
        if (i > start)
        {
            for (b = base; b <= i; b++)
            {
                printf("%c ", filler);
            }
        }
        printf("%c \n", border);
    }

    for (j = base; j < length + base; j++)
    {
        printf("%c ", border);
    }
    printf("\n");
}


int main()
{
    int length = 6;
    drawTriangle('*', ' ', length);
    return 0;
}/*
1 1
 2 2
  3 3
   4
  3 3
 2 2
1 1
*/

#include<stdio.h>

int main()
{
    int i, j, k = 1;
    int m[7][7] = {0};
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == i || 8 - i == j)
            {
                m[i - 1][j - 1] = k;
            }
        }
        if (i < 4)
        {
            k++;
        }
        else
        {
            --k;
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            if (m[i][j] == 0)
            {
                printf(" ");
            }
            else
            {
                printf("%d", m[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}