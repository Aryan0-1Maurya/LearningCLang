//This proram is compiled in Turbo C	#include <graphics.h>#include <conio.h> main(){   int gd = DETECT, gm;    initgraph(&gd, &gm, "C:\\TC\\BGI");    setcolor(YELLOW);   rectangle(0,30,639,450);   settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);   setcolor(WHITE);   outtextxy(275,0,"Bar Chart");    setlinestyle(SOLID_LINE,0,2);    line(100,420,100,60);   line(100,420,600,420);   line(90,70,100,60);   line(110,70,100,60);   line(590,410,600,420);   line(590,430,600,420);    outtextxy(95,35,"Y");   outtextxy(610,405,"X");   outtextxy(85,415,"O");    setfillstyle(LINE_FILL,BLUE);   bar(150,100,200,419);    setfillstyle(XHATCH_FILL,RED);   bar(225,150,275,419);    setfillstyle(WIDE_DOT_FILL,GREEN);   bar(300,200,350,419);    setfillstyle(INTERLEAVE_FILL,MAGENTA);   bar(375,125,425,419);    setfillstyle(HATCH_FILL,BROWN);   bar(450,175,500,419);    getch();   return 0;}//This proram is compiled in Turbo C	#include<graphics.h>#include<conio.h> int main(){   int gd = DETECT, gm, midx, midy;    initgraph(&gd, &gm, "C:\\TC\\BGI");    setcolor(MAGENTA);   rectangle(0,40,639,450);   settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);   setcolor(WHITE);   outtextxy(275,10,"Pie Chart");    midx = getmaxx()/2;   midy = getmaxy()/2;    setfillstyle(LINE_FILL,BLUE);   pieslice(midx, midy, 0, 75, 100);   outtextxy(midx+100, midy - 75, "20.83%");    setfillstyle(XHATCH_FILL,RED);   pieslice(midx, midy, 75, 225, 100);   outtextxy(midx-175, midy - 75, "41.67%");    setfillstyle(WIDE_DOT_FILL,GREEN);   pieslice(midx, midy, 225, 360, 100);   outtextxy(midx+75, midy + 75, "37.50%");    getch();   return 0;}//This proram is compiled in Turbo C	#include <graphics.h>int main(){    int gd = DETECT, gm;   int x = 320, y = 240, radius;    initgraph(&gd, &gm, "C:\\TC\\BGI");    for ( radius = 25; radius <= 125 ; radius = radius + 20)      circle(x, y, radius);    getch();   closegraph();   return 0;}#include<stdio.h>
int main(){    int i = 10;
    do    {        printf("Hello %d\n", i);        i = i - 1;    } while (i > 0);
    return 0;}#include <stdio.h>
int main(){    int x;    for (x = 0; x <= 10; x++)    {        if (x & 1)        {            printf("%d - odd\n", x);        }        else        {            printf("%d - even\n", x);        }    }
    return 0;}#include<stdio.h>
int main(){    int i;
    /*         The loop goes while i < 10,         and i increases by one every loop     */
    for (i = 0; i < 10; i++)    {        /* Keep in mind that the loop condition checks           the conditional statement before it loops again.           consequently, when i equals 10 the loop breaks.           i is updated before the condition is checked. */
        printf("%d\n", i);    }    return 0;}#include<stdlib.h>#include<time.h>#include<stdio.h>
int main(){    int a, b;
    srand(time(NULL));
    while (1)    {        // not exactly uniformly distributed, but doesn't matter        a = rand() % 20;        printf("%d\n", a);        if (a == 10)        {            break;        }        // not exactly uniformly distributed, but doesn't matter        b = rand() % 20;        printf("%d\n", b);    }    return 0;}#include<stdio.h>
int main(){    int i, j, k;
    printf("Output of nested loop is : \n");
    for (i = 0; i < 3; i++)    {        for (j = 0; j < 3; j++)        {            printf(" %d", i + j);        }    }
    return 0;}#include <stdio.h>
int main(){
    // Don't forget to declare variables
    int i = 0;
    // While i is less than 10    while (i < 10)    {
        printf("%d\n", i);        // Update i so the condition can be met eventually        i++;    }    return 0;}