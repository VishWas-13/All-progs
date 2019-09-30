#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
	float a,b,c,avg;
	printf("\n\n\t\t Question-13");
	printf("\n\n\t\t Enter first number: ");
	scanf("%f",&a);
	printf("\n\t\t Enter second number: ");
	scanf("%f",&b);
	printf("\n\t\t Enter third number: ");
	scanf("%f",&c);
	avg=(a+b+c)/3;
	printf("\n\n\t\t Average of 3 numbers is= %.2f",avg);
	getch();
}
