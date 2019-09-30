#include<stdio.h>
#include<conio.h>
void main()
{
	float n;
	printf("\n\n\t\t Question-14");
	printf("\n\t Enter any real number = ");
	scanf("%f",&n);
	printf("\n\n\t Number in integer form = %d",(int)n);
	printf("\n\t Number in float form = %f",n);
	printf("\n\t Number in float having 3 digits after decimal = %.3f",n);
	printf("\n\t Number in double = %lf",n);
	getch();
}
