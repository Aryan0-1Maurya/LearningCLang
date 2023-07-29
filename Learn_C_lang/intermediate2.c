#include <stdio.h>
int main(){    char c;    printf("Enter a character: ");    scanf("%c", &c);    printf("ASCII value of %c = %d", c, c);    return 0;}#include<stdio.h>#include<stdlib.h>#include<string.h>
int isBal(const char *s, int l){    signed c = 0;
    while (l--)    {        if (s[l] == ']')        {            ++c;        }
        else if (s[l] == '[')        {            if (--c < 0) break;            {                return !c;            }        }    }}

void shuffle(char *s, int h){    int x, t, i = h;
    while (i--)    {        t = s[x = rand() % h];        s[x] = s[i];        s[i] = t;    }
}

void genSeq(char *s, int n){    if (n)    {        memset(s, '[', n);        memset(s + n, ']', n);        shuffle(s, n * 2);    }
    s[n * 2] = 0;}

void doSeq(int n){    char s[64];    const char *o = "False";    genSeq(s, n);
    if (isBal(s, n * 2))    {        o = "True";    }    printf("'%s': %s\n", s, o);}
int main(){    int n = 0;
    while (n < 9)    {        doSeq(n++);    }    return 0;
}#include <stdio.h>#include <stdlib.h>#include <string.h>
int width = 80, year = 1969;int cols, lead, gap;
const char *wdays[] = {"Su", "Mo", "Tu", "We", "Th", "Fr", "Sa"};struct months {    const char *name;    int days, start_wday, at;} months[12] = {        {"January", 31, 0, 0},        {"Februray", 28, 0, 0},        {"March", 31, 0, 0},        {"April", 30, 0, 0},        {"May", 31, 0, 0},        {"June", 30, 0, 0},        {"July", 31, 0, 0},        {"August", 31, 0, 0},        {"September", 30, 0, 0},        {"October", 31, 0, 0},        {"November", 30, 0, 0},        {"December", 31, 0, 0}};
void space(int n){ while (n-- > 0) putchar(' '); }
void init_months(){    int i;
    if ((!(year % 4) && (year % 100)) || !(year % 400))        months[1].days = 29;
    year--;    months[0].start_wday            = (year * 365 + year / 4 - year / 100 + year / 400 + 1) % 7;
    for (i = 1; i < 12; i++)        months[i].start_wday =                (months[i - 1].start_wday + months[i - 1].days) % 7;
    cols = (width + 2) / 22;    while (12 % cols) cols--;    gap = cols - 1 ? (width - 20 * cols) / (cols - 1) : 0;    if (gap > 4) gap = 4;    lead = (width - (20 + gap) * cols + gap + 1) / 2;    year++;}
void print_row(int row){    int c, i, from = row * cols, to = from + cols;    space(lead);    for (c = from; c < to; c++)    {        i = strlen(months[c].name);        space((20 - i) / 2);        printf("%s", months[c].name);        space(20 - i - (20 - i) / 2 + ((c == to - 1) ? 0 : gap));    }    putchar('\n');
    space(lead);    for (c = from; c < to; c++)    {        for (i = 0; i < 7; i++)            printf("%s%s", wdays[i], i == 6 ? "" : " ");        if (c < to - 1) space(gap);        else putchar('\n');    }
    while (1)    {        for (c = from; c < to; c++)            if (months[c].at < months[c].days) break;        if (c == to) break;
        space(lead);        for (c = from; c < to; c++)        {            for (i = 0; i < months[c].start_wday; i++) space(3);            while (i++ < 7 && months[c].at < months[c].days)            {                printf("%2d", ++months[c].at);                if (i < 7 || c < to - 1) putchar(' ');            }            while (i++ <= 7 && c < to - 1) space(3);            if (c < to - 1) space(gap - 1);            months[c].start_wday = 0;        }        putchar('\n');    }    putchar('\n');}void print_row(int row){    int c, i, from = row * cols, to = from + cols;    space(lead);    for (c = from; c < to; c++)    {        i = strlen(months[c].name);        space((20 - i) / 2);        printf("%s", months[c].name);        space(20 - i - (20 - i) / 2 + ((c == to - 1) ? 0 : gap));    }    putchar('\n');
    space(lead);    for (c = from; c < to; c++)    {        for (i = 0; i < 7; i++)            printf("%s%s", wdays[i], i == 6 ? "" : " ");        if (c < to - 1) space(gap);        else putchar('\n');    }
    while (1)    {        for (c = from; c < to; c++)            if (months[c].at < months[c].days) break;        if (c == to) break;
        space(lead);        for (c = from; c < to; c++)        {            for (i = 0; i < months[c].start_wday; i++) space(3);            while (i++ < 7 && months[c].at < months[c].days)            {                printf("%2d", ++months[c].at);                if (i < 7 || c < to - 1) putchar(' ');            }            while (i++ <= 7 && c < to - 1) space(3);            if (c < to - 1) space(gap - 1);            months[c].start_wday = 0;        }        putchar('\n');    }    putchar('\n');}#include <stdio.h>#include <stdlib.h>#include <string.h>
int width = 80, year = 1969;int cols, lead, gap;
const char *wdays[] = {"Su", "Mo", "Tu", "We", "Th", "Fr", "Sa"};struct months {    const char *name;    int days, start_wday, at;} months[12] = {        {"January", 31, 0, 0},        {"Februray", 28, 0, 0},        {"March", 31, 0, 0},        {"April", 30, 0, 0},        {"May", 31, 0, 0},        {"June", 30, 0, 0},        {"July", 31, 0, 0},        {"August", 31, 0, 0},        {"September", 30, 0, 0},        {"October", 31, 0, 0},        {"November", 30, 0, 0},        {"December", 31, 0, 0}};
void space(int n){ while (n-- > 0) putchar(' '); }
void init_months(){    int i;
    if ((!(year % 4) && (year % 100)) || !(year % 400))        months[1].days = 29;
    year--;    months[0].start_wday            = (year * 365 + year / 4 - year / 100 + year / 400 + 1) % 7;
    for (i = 1; i < 12; i++)        months[i].start_wday =                (months[i - 1].start_wday + months[i - 1].days) % 7;
    cols = (width + 2) / 22;    while (12 % cols) cols--;    gap = cols - 1 ? (width - 20 * cols) / (cols - 1) : 0;    if (gap > 4) gap = 4;    lead = (width - (20 + gap) * cols + gap + 1) / 2;    year++;}#include<windows.h>#include<stdio.h>
int main(){    //BACKGROUND_RED | BACKGROUND_GREEN| BACKGROUND_INTENSITY | BACKGROUND_BLUE    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),                             BACKGROUND_BLUE|BACKGROUND_RED);    printf("\n\nBackground Color Change");
    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),                              BACKGROUND_GREEN);    printf("\n\nBackground Color Change");
    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),                              BACKGROUND_INTENSITY);    printf("\n\nBackground Color Change");
    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),                              BACKGROUND_RED);    printf("\n\nBackground Color Change");
    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),                              BACKGROUND_BLUE);    printf("\n\nBackground Color Change");
    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),                              BACKGROUND_RED|BACKGROUND_INTENSITY);    printf("\n\nBackground Color Change");
    return 0;}#include<windows.h>#include<stdio.h>void setColor(int ForgC);int main(){    setColor(26);    printf("Color Change : Programming Hub");    setColor(36);    printf("\n\nColor Change : Programming Hub");    setColor(46);    printf("\n\nColor Change : Programming Hub");    setColor(56);    printf("\n\nColor Change : Programming Hub");    setColor(66);    printf("\n\nColor Change : Programming Hub");    setColor(76);    printf("\n\nColor Change : Programming Hub");    getch();    return 0;}void setColor(int ForgC){    WORD wColor;
    //We will need this handle to get the current background attribute    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);    CONSOLE_SCREEN_BUFFER_INFO csbi;
    //We use csbi for the wAttributes word.    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))    {        //Mask out all but the background attribute, and add in the forgournd color        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);        SetConsoleTextAttribute(hStdOut, wColor);    }}#include <stdio.h>
int main(){    char ch;
    printf("Input a character : ");    scanf("%c", &ch);
    switch (ch)    {        case 'a':        case 'A':        case 'e':        case 'E':        case 'i':        case 'I':        case 'o':        case 'O':        case 'u':        case 'U':            printf("%c is a vowel.\n", ch);            break;        default:            printf("%c is not a vowel.\n", ch);    }
    return 0;}#include <stdio.h>#include <ctype.h>
int main(){    char alphabet;
    printf("Enter an alphabet : ");    alphabet = getchar();
    printf("Reversed case : ");    if (islower(alphabet))    {        putchar(toupper(alphabet));    }    else    {        putchar(tolower(alphabet));    }
    return 0;}#include <stdio.h>#include <string.h>#include <stdlib.h>
// A function that prints given number in words
void convert_to_words(char *num){    // Get number of digits in given number    int len = strlen(num);
    // Base cases    if (len == 0)    {        fprintf(stderr, "empty string\n");        return;    }    if (len > 4)    {        fprintf(stderr, "Length more than 4 is not supported\n");        return;    }
    // The first string is not used, it is to make array indexing simple    char *single_digits[] = {            "zero", "one", "two", "three", "four",            "five", "six", "seven", "eight", "nine"    };
    // The first string is not used, it is to make array indexing simple    char *two_digits[] = {            "", "ten", "eleven", "twelve", "thirteen", "fourteen",            "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"    };
    // The first two string are not used, they are to make array indexing simple    char *tens_multiple[] = {            "", "", "twenty", "thirty", "forty", "fifty",            "sixty", "seventy", "eighty", "ninety"    };
    char *tens_power[] = {"hundred", "thousand"};
    // Used for debugging purpose only    printf("\n%s: ", num);
    // For single digit number    if (len == 1)    {        printf("%s\n", single_digits[*num - '0']);        return;    }// Iterate while num is not '\0'    while (*num != '\0')    {
        // Code path for first 2 digits        if (len >= 3)        {            if (*num - '0' != 0)            {                printf("%s ", single_digits[*num - '0']);                // here len can be 3 or 4                printf("%s ", tens_power[len - 3]);            }            --len;        }
            // Code path for last 2 digits        else        {            /* Need to explicitly handle 10-19. Sum of the two digits is               used as index of "two_digits" array of strings */            if (*num == '1')            {                int sum = *num - '0' + *(num + 1) - '0';                printf("%s\n", two_digits[sum]);                return;            }
                // Need to explicitely handle 20            else if (*num == '2' && *(num + 1) == '0')            {                printf("twenty\n");                return;            }
                // Rest of the two digit numbers i.e., 21 to 99            else            {                int i = *num - '0';                printf("%s ", i ? tens_multiple[i] : "");                ++num;                if (*num != '0')                {                    printf("%s ", single_digits[*num - '0']);                }            }        }        ++num;    }}
int main(){    char num[100];    printf("Enter number to convert to words : ");    scanf("%s", num);    convert_to_words(num);
    return 0;}