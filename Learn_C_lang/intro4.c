#include <stdio.h>
#include <ctype.h>

int main()
{
    int var1 = 'd';
    int var2 = '2';
    int var3 = '\t';
    int var4 = ' ';

    if (isalnum(var1))
    {
        printf("var1 = |%c| is alphanumeric\n", var1);
    }
    else
    {
        printf("var1 = |%c| is not alphanumeric\n", var1);
    }

    if (isalnum(var2))
    {
        printf("var2 = |%c| is alphanumeric\n", var2);
    }
    else
    {
        printf("var2 = |%c| is not alphanumeric\n", var2);
    }

    if (isalnum(var3))
    {
        printf("var3 = |%c| is alphanumeric\n", var3);
    }
    else
    {
        printf("var3 = |%c| is not alphanumeric\n", var3);
    }

    if (isalnum(var4))
    {
        printf("var4 = |%c| is alphanumeric\n", var4);
    }
    else
    {
        printf("var4 = |%c| is not alphanumeric\n", var4);
    }
    return 0;
}#include <stdio.h>
#include <ctype.h>

int main()
{
    int var1 = 'd';
    int var2 = '2';
    int var3 = '\t';
    int var4 = ' ';

    if (isalpha(var1))
    {
        printf("var1 = |%c| is an alphabet\n", var1);
    }
    else
    {
        printf("var1 = |%c| is not an alphabet\n", var1);
    }

    if (isalpha(var2))
    {
        printf("var2 = |%c| is an alphabet\n", var2);
    }
    else
    {
        printf("var2 = |%c| is not an alphabet\n", var2);
    }

    if (isalpha(var3))
    {
        printf("var3 = |%c| is an alphabet\n", var3);
    }
    else
    {
        printf("var3 = |%c| is not an alphabet\n", var3);
    }

    if (isalpha(var4))
    {
        printf("var4 = |%c| is an alphabet\n", var4);
    }
    else
    {
        printf("var4 = |%c| is not an alphabet\n", var4);
    }

    return 0;
}#include <stdio.h>
#include <ctype.h>

int main()
{
    int i = 0, j = 0;
    char str1[] = "all \a about \t programming";
    char str2[] = "hub \n app";

    /* Prints string till control character \a */
    while (!iscntrl(str1[i]))
    {
        putchar(str1[i]);
        i++;
    }

    /* Prints string till control character \n */
    while (!iscntrl(str2[j]))
    {
        putchar(str2[j]);
        j++;
    }

    return 0;
}#include <stdio.h>
#include <ctype.h>

int main()
{
    int var1 = 'h';
    int var2 = '2';

    if (isdigit(var1))
    {
        printf("var1 = |%c| is a digit\n", var1);
    }
    else
    {
        printf("var1 = |%c| is not a digit\n", var1);
    }

    if (isdigit(var2))
    {
        printf("var2 = |%c| is a digit\n", var2);
    }
    else
    {
        printf("var2 = |%c| is not a digit\n", var2);
    }

    return 0;
}#include <stdio.h>
#include <ctype.h>

int main()
{
    int var1 = '3';
    int var2 = 'm';
    int var3 = ' ';

    if (isgraph(var1))
    {
        printf("var1 = |%c| can be printed\n", var1);
    }
    else
    {
        printf("var1 = |%c| can't be printed\n", var1);
    }

    if (isgraph(var2))
    {
        printf("var2 = |%c| can be printed\n", var2);
    }
    else
    {
        printf("var2 = |%c| can't be printed\n", var2);
    }

    if (isgraph(var3))
    {
        printf("var3 = |%c| can be printed\n", var3);
    }
    else
    {
        printf("var3 = |%c| can't be printed\n", var3);
    }

    return 0;
}#include <stdio.h>
#include <ctype.h>

int main()
{
    int var1 = 'Q';
    int var2 = 'q';
    int var3 = '3';

    if (islower(var1))
    {
        printf("var1 = |%c| is lowercase character\n", var1);
    }
    else
    {
        printf("var1 = |%c| is not lowercase character\n", var1);
    }

    if (islower(var2))
    {
        printf("var2 = |%c| is lowercase character\n", var2);
    }
    else
    {
        printf("var2 = |%c| is not lowercase character\n", var2);
    }

    if (islower(var3))
    {
        printf("var3 = |%c| is lowercase character\n", var3);
    }
    else
    {
        printf("var3 = |%c| is not lowercase character\n", var3);
    }

    return (0);
}#include <stdio.h>
#include <ctype.h>

int main()
{
    int var1 = 'k';
    int var2 = '8';
    int var3 = '\t';
    int var4 = ' ';

    if (isprint(var1))
    {
        printf("var1 = |%c| can be printed\n", var1);
    }
    else
    {
        printf("var1 = |%c| can't be printed\n", var1);
    }

    if (isprint(var2))
    {
        printf("var2 = |%c| can be printed\n", var2);
    }
    else
    {
        printf("var2 = |%c| can't be printed\n", var2);
    }

    if (isprint(var3))
    {
        printf("var3 = |%c| can be printed\n", var3);
    }
    else
    {
        printf("var3 = |%c| can't be printed\n", var3);
    }

    if (isprint(var4))
    {
        printf("var4 = |%c| can be printed\n", var4);
    }
    else
    {
        printf("var4 = |%c| can't be printed\n", var4);
    }

    return 0;
}#include <stdio.h>
#include <ctype.h>

int main()
{
    int var1 = 't';
    int var2 = '1';
    int var3 = '/';
    int var4 = ' ';

    if (ispunct(var1))
    {
        printf("var1 = |%c| is a punctuation character\n", var1);
    }
    else
    {
        printf("var1 = |%c| is not a punctuation character\n", var1);
    }

    if (ispunct(var2))
    {
        printf("var2 = |%c| is a punctuation character\n", var2);
    }
    else
    {
        printf("var2 = |%c| is not a punctuation character\n", var2);
    }

    if (ispunct(var3))
    {
        printf("var3 = |%c| is a punctuation character\n", var3);
    }
    else
    {
        printf("var3 = |%c| is not a punctuation character\n", var3);
    }

    if (ispunct(var4))
    {
        printf("var4 = |%c| is a punctuation character\n", var4);
    }
    else
    {
        printf("var4 = |%c| is not a punctuation character\n", var4);
    }

    return 0;
}/*
' ' (0x20) space (SPC)
'\t' (0x09) horizontal tab (TAB)
'\n' (0x0a) newline (LF)
'\v' (0x0b) vertical tab (VT)
'\f' (0x0c) feed (FF)
'\r' (0x0d) carriage return (CR)
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    int var1 = 't';
    int var2 = '1';
    int var3 = ' ';

    if (isspace(var1))
    {
        printf("var1 = |%c| is a white-space character\n", var1);
    }
    else
    {
        printf("var1 = |%c| is not a white-space character\n", var1);
    }

    if (isspace(var2))
    {
        printf("var2 = |%c| is a white-space character\n", var2);
    }
    else
    {
        printf("var2 = |%c| is not a white-space character\n", var2);
    }

    if (isspace(var3))
    {
        printf("var3 = |%c| is a white-space character\n", var3);
    }
    else
    {
        printf("var3 = |%c| is not a white-space character\n", var3);
    }

    return 0;
}#include <stdio.h>
#include <ctype.h>

int main()
{
    int var1 = 'M';
    int var2 = 'm';
    int var3 = '3';

    if (isupper(var1))
    {
        printf("var1 = |%c| is uppercase character\n", var1);
    }
    else
    {
        printf("var1 = |%c| is not uppercase character\n", var1);
    }

    if (isupper(var2))
    {
        printf("var2 = |%c| is uppercase character\n", var2);
    }
    else
    {
        printf("var2 = |%c| is not uppercase character\n", var2);
    }

    if (isupper(var3))
    {
        printf("var3 = |%c| is uppercase character\n", var3);
    }
    else
    {
        printf("var3 = |%c| is not uppercase character\n", var3);
    }

    return 0;
}#include <stdio.h>
#include <ctype.h>

int main()
{
    char var1[] = "programming";
    char var2[] = "0xE";

    if (isxdigit(var1[0]))
    {
        printf("var1 = |%s| is hexadecimal character\n", var1);
    }
    else
    {
        printf("var1 = |%s| is not hexadecimal character\n", var1);
    }

    if (isxdigit(var2[0]))
    {
        printf("var2 = |%s| is hexadecimal character\n", var2);
    }
    else
    {
        printf("var2 = |%s| is not hexadecimal character\n", var2);
    }

    return 0;
}#include <stdio.h>
#include <ctype.h>

int main()
{
    int i = 0;
    char c;
    char str[] = "PROGRAMMING HUB";

    while (str[i])
    {
        putchar(tolower(str[i]));
        i++;
    }

    return 0;
}#include <stdio.h>
#include <ctype.h>

int main()
{
    int i = 0;
    char c;
    char str[] = "Programming Hub";

    while (str[i])
    {
        putchar(toupper(str[i]));
        i++;
    }

    return 0;
}