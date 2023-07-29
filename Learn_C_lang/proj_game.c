#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <windows.h>
int board[10] = {2,2,2,2,2,2,2,2,2,2};int turn = 1,flag = 0;int player,comp;
void menu();void go(int n);void start_game();void check_draw();void draw_board();void player_first();void put_X_O(char ch,int pos);COORD coord= {0,0}; // this is global variable//center of axis is set to the top left cornor of the screenvoid gotoxy(int x,int y){    coord.X=x;    coord.Y=y;    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);}
void main(){  system("cls");  menu();  getch();
}
void menu(){  int choice;  system("cls");  printf("\n--------MENU--------");  printf("\n1 : Play with X");  printf("\n2 : Play with O");  printf("\n3 : Exit");  printf("\nEnter your choice:>");  scanf("%d",&choice);  turn = 1;  switch (choice)  {  case 1:    player = 1;    comp = 0;    player_first();    break;  case 2:    player = 0;    comp = 1;    start_game();    break;  case 3:    exit(1);  default:    menu();  }}int make2(){  if(board[5] == 2)    return 5;  if(board[2] == 2)    return 2;  if(board[4] == 2)    return 4;  if(board[6] == 2)    return 6;  if(board[8] == 2)    return 8;  return 0;}
int make4(){  if(board[1] == 2)    return 1;  if(board[3] == 2)    return 3;  if(board[7] == 2)    return 7;  if(board[9] == 2)    return 9;  return 0;}
int posswin(int p){// p==1 then X p==0 then O  int i;  int check_val,pos;
  if(p == 1)    check_val = 18;  else    check_val = 50;
  i = 1;  while(i<=9)//row check  {    if(board[i] * board[i+1] * board[i+2] == check_val)    {      if(board[i] == 2)        return i;      if(board[i+1] == 2)        return i+1;      if(board[i+2] == 2)        return i+2;    }    i+=3;  }i = 1;  while(i<=3)//column check  {    if(board[i] * board[i+3] * board[i+6] == check_val)    {      if(board[i] == 2)        return i;      if(board[i+3] == 2)        return i+3;      if(board[i+6] == 2)        return i+6;    }    i++;  }
  if(board[1] * board[5] * board[9] == check_val)  {    if(board[1] == 2)      return 1;    if(board[5] == 2)      return 5;    if(board[9] == 2)      return 9;  }
  if(board[3] * board[5] * board[7] == check_val)  {    if(board[3] == 2)      return 3;    if(board[5] == 2)      return 5;    if(board[7] == 2)      return 7;  }  return 0;}
void go(int n){  if(turn % 2)    board[n] = 3;  else    board[n] = 5;  turn++;}
void player_first(){  int pos;
  check_draw();  draw_board();  gotoxy(30,18);  printf("Your Turn :> ");  scanf("%d",&pos);
  if(board[pos] != 2)    player_first();
  if(pos == posswin(player))  {    go(pos);    draw_board();    gotoxy(30,20);    //textcolor(128+RED);    printf("Player Wins");    getch();    exit(0);  }
  go(pos);  draw_board();  start_game();}void start_game(){// p==1 then X p==0 then O  if(posswin(comp))  {    go(posswin(comp));    flag = 1;  }  else if(posswin(player))    go(posswin(player));  else if(make2())    go(make2());  else    go(make4());  draw_board();
  if(flag)  {    gotoxy(30,20);    //textcolor(128+RED);    printf("Computer wins");    getch();  }  else    player_first();}
void check_draw(){  if(turn > 9)  {    gotoxy(30,20);    //textcolor(128+RED);    printf("Game Draw");    getch();    exit(0);  }}
void draw_board(){  int j;
  for(j=9; j<17; j++)  {    gotoxy(35,j);    printf("| |");  }  gotoxy(28,11);  printf("-----------------------");  gotoxy(28,14);  printf("-----------------------");
  for(j=1; j<10; j++)  {    if(board[j] == 3)      put_X_O('X',j);    else if(board[j] == 5)      put_X_O('O',j);  }}void put_X_O(char ch,int pos){  int m;  int x = 31, y = 10;
  m = pos;
  if(m > 3)  {    while(m > 3)    {      y += 3;      m -= 3;    }  }  if(pos % 3 == 0)    x += 16;  else  {    pos %= 3;    pos--;    while(pos)    {      x+=8;      pos--;    }  }  gotoxy(x,y);  printf("%c",ch);}






#include<stdio.h>
int sudoku[9][9]; //The array which stores entries for the sudoku
void solvesudoku(int, int);
int checkrow(int row, int num){  //This function checks whether we can put the number(num) in the row(row) of the Sudoku or not  int column;  for (column = 0; column < 9; column++)  {    if (sudoku[row][column] == num)    {      //If the number is found already present at certain location we return zero      return 0;    }  }  //If the number is not found anywhere we return 1  return 1;}
int checkcolumn(int column, int num){  //This function checks whether we can put the number(num) in the column(column) of the Sudoku or not  int row;  for (row = 0; row < 9; row++)  {    if (sudoku[row][column] == num)    {      //If the number is found already present at certain location we return zero      return 0;    }  }  //If the number is not found anywhere we return 1  return 1;}
int checkgrid(int row, int column, int num){  //This function checks whether we can put the number(num) in the 3*3 grid or not  //We get the starting row and column for the 3*3 grid  row = (row / 3) * 3;  column = (column / 3) * 3;
  int r, c;  for (r = 0; r < 3; r++)  {    for (c = 0; c < 3; c++)    {if (sudoku[row + r][column + c] == num)      {        //If the number is found already present at certain location we return zero        return 0;      }    }  }
  //If the number is not found anywhere we return 1  return 1;}
void navigate(int row, int column){   //Function to move to the next cell in case we have filled one cell    if (column < 8)        solvesudoku(row, column + 1);    else        solvesudoku(row + 1, 0);}
void display(){    //The function to display the solved Sudoku    int row, column;    printf("THE SOLVED SUDOKU \n");    for (row = 0; row < 9; row++)    {        for (column = 0; column < 9; column++)            printf("%d ", sudoku[row][column]);
        printf("\n");    }}
void solvesudoku(int row, int column){    //If the row number is greater than 8 than we have filled all cells hence we have solved the sudoku    if (row > 8)        display();    if (sudoku[row][column] != 0)    {        //If the value filled at a cell is not zero than it is filled with some value from 0 to 9 hence we move further        navigate(row, column);    }    else    {        //This is a counter to check numbers from 1 to 9 whether the number can be filled in the cell or notint ctr;        for (ctr = 1; ctr <= 9; ctr++)        {            //We check row,column and the grid            if ((checkrow(row, ctr) == 1) && (checkcolumn(column, ctr) == 1) && (checkgrid(row, column, ctr) == 1))            {                sudoku[row][column] = ctr;                navigate(row, column);            }        }        //No valid number was found so we clean up and return to the caller.        sudoku[row][column] = 0;    }}
int main(){    int row, column;    printf("Enter the desired sudoku and enter 0 for unknown entries\n");    for (row = 0; row < 9; row++)        for (column = 0; column < 9; column++)            scanf("%d", &sudoku[row][column]);
    //We start solving the sudoku.    solvesudoku(0, 0);    return 0;}#include <stdio.h>
void towers(int, char, char, char);
int main(){    int num;
    printf("Enter the number of disks : ");    scanf("%d", &num);    printf("The sequence of moves involved in the Tower of Hanoi are :\n");    towers(num, 'A', 'C', 'B');    return 0;}
void towers(int num, char frompeg, char topeg, char auxpeg){    if (num == 1)    {        printf("\n Move disk 1 from peg %c to peg %c", frompeg, topeg);        return;    }    towers(num - 1, frompeg, auxpeg, topeg);    printf("\n Move disk %d from peg %c to peg %c", num, frompeg, topeg);    towers(num - 1, auxpeg, topeg, frompeg);}