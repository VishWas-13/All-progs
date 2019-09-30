#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
	char c;
	printf("\n\n\t\t Question-16");
	printf("\n\n\t\t Enter a letter: ");
	scanf("%c",&c);
	if((c<=122)&&(c>=97))
		printf("\n\n\t\t Letter in uppercase is= %c",c-32);
	else if((c<=90)&&(c>=65))
		printf("\n\n\t\t Letter is already an uppercase letter ' %c '",c);
	else
		printf("\n\n\t\t INVALID");
	getch();
}
