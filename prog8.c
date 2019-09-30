#include<stdio.h>
#include<conio.h>
void main()
{
	int a=5,b=2;
	printf("\n\n\t\t Swaping(2)\n\t 1st number= %d",a);
	printf("\n\t 2nd number= %d",b);
	a+=b;
	b=a-b;
	a-=b;
	printf("\n\t 1st number= %d",a);
	printf("\n\t 2nd number= %d",b);
	getch();
}
