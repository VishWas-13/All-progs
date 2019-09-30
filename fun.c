#include<conio.h>
#include<stdio.h>
void main()
{
	int i;
	for(i=0;i<=10;i++)
		{
			sleep(1);
			cprintf("/");
			textcolor(i+1);
		}
	getch();
}
