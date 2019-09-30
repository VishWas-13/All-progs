#include<stdio.h>
#include<conio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int dvi(int a,int b);
void menu();
void main()
{
	system("cls");
	int a,b;
	printf("\n\n\t\t\t Calculator");
	printf("\n\t Enter first number: ");
	scanf("%d",&a);
	printf("\n\t Enter second number: ");
	scanf("%d",&b);
	menu();
}
void menu()
{
	int c;
	printf("\n\n\t 1. Add");
	printf("\n\n\t 2. Subtract");
	printf("\n\n\t 3. Multiply");
	printf("\n\n\t 4. Divide");
	printf("\n\n\t Enter your choice: ");
	scanf("%d",&c);
	switch("%d",c)
	{
		case 1: add(a,b);
				break;
		case 2: sub(a,b);
				break;
		
		case 3: mul(a,b);
				break;
		
		case 4: div(a,b);
				break;
		default:printf("\n\t invalid choice");
				break;
	}
}
int add(a,b)
{
	a+b;
	return 0;
}
int sub(a,b)
{
	a-b;
	return 0;
}
int mul(a,b)
{
	a*b;
	return 0;
}
int div(a,b)
{
	a/b;
	return 0;
}

