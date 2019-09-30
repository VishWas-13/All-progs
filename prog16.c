#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	system("cls");
	float value=123456.456;
	
	printf("value: %f (using %%f format specifier)\n",value);
	printf("value: %e (using %%e format specifier)\n",value);
	
	getch();
}
