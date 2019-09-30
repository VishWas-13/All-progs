#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
	float r,area,perimeter;
	printf("\n\n\t\t Question-11");
	printf("\n\n\t\t Enter radius of circle: ");
	scanf("%f",&r);
	area=PI*r*r;
	perimeter=2*PI*r;
	printf("\n\n\t\t Perimeter of circle is= %.2f",perimeter);
	printf("\n\t\t Area of circle is= %.2f",area);
	getch();
}
