#include<stdio.h>
#include<conio.h>
void main()
{
	float m,t,c,p,f;
	printf("\n\t QUESTION-6");
	printf("\n Enter marks in Maths: ");
	scanf("%f",&m);
	printf("\n Enter marks in TC: ");
	scanf("%f",&t);
	printf("\n Enter marks in C: ");
	scanf("%f",&c);
	printf("\n Enter marks in Physics: ");
	scanf("%f",&p);
	printf("\n Enter marks in FIT: ");
	scanf("%f",&f);
	float sum=m+t+c+p+f;
	printf("\n\t Sum is= %f",sum);
	getch();
}
