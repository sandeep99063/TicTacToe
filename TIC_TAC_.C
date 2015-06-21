#include<stdio.h>
#include<conio.h>
#include<process.h>



display(char A[3][3],int x,int y)
{
int i,j;
 printf("\n\n\t\t\t\t");
 printf("|-----|-----|-----|\n");
 for(i=0;i<3;i++)
 {
	 printf("\t\t\t\t|");
	 for(j=0;j<3;j++)
	 {
	if(A[i][j]=='X')
	{
	textcolor(RED);

	}
	if(A[i][j]=='0')
	{
	textcolor(GREEN);

	}
	if(i==x && j==y)
	{
	 textbackground(WHITE);
	}
	cprintf("  %c  ",A[i][j]);
	textbackground(YELLOW);
	textcolor(BLUE);
	printf("|");
	 }
 printf("\n\t\t\t\t|-----|-----|-----|\n");
 }
}

char check(char A[3][3])
{
 int i,j;
 char a=NULL;
 for(i=0;i<3;i++)
	{
	if(A[i][0]==A[i][1] && A[i][1]==A[i][2] && A[i][0]!=' ')
		{
	a=A[i][0];
	 break;
		}
	else if(A[0][i]==A[1][i] && A[1][i]==A[2][i] && A[0][i]!=' ')
	{
		a=A[0][i];
		break;
	}
else if(A[0][0]==A[1][1] && A[1][1]==A[2][2] || (A[2][0]==A[1][1] && A[1][1]==A[0][2]))
	{
	a=A[1][1];
	break;
	}    }
return a;


	}

main()
{
char b,a,A[3][3]={' ',' ',' ',' ',' ',' ',' ',' ',' '},B[2]={'X','0'};
int x=0,y=0,i,j,z;
for(i=0;i<9;i++)
{
textbackground(YELLOW);
textcolor(BLUE);
clrscr();
printf("\n\tThe board is :\n");
display(A,x,y);
printf("\n\n\n\nTo Fill The Box Press Spacebar\nTo Move In Box Use Arrows\nTo Exit Press Backspace\ns");
 do
 {
 z=0;
 do
  {
  b=getch();
  switch(b)
  {
  case 'H':if(x)
	   {
	   x--;
	   }
	   break;
  case 'K':if(y)
	   {
	   y--;
	   }
	   break;
  case 'P':if(x<2)
	   {
	   x++;
	   }
	      break;
  case 'M':if(y<2)
	   {
	   y++;

	   }
	   break;
 case '\b':exit(0);
break;

  }
  clrscr();
printf("\n\tThe board is :\n");
display(A,x,y);
printf("\n\n\n\nTo Fill The Box Press Spacebar\nTo Move In Box Use Arrows\nTo Exit Press Backspace\n");
}while(b!=' ');
if(A[x][y]!=' ')
{
printf("\n\nInvalid Moves\n");
z=1    ;
}
}while(z);

A[x][y]=B[i%2];
a=check(A);
if(a=='X'||a=='0')
{
clrscr();
printf("\n\tThe board is :\n");
display(A,3,3);
printf("\n\t\t\t%c has Won The Game ",a);
break;

}
if(x==NULL)
{
clrscr();
printf("\n\tThe board is :\n");
display(A,3,3);
printf("\n\t\t\tMatch Is Drawn");
}

 }


getch();
}