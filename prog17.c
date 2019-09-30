#include<stdio.h>
int main()
{
	int a,b,c,big;
	printf("\n\t Question-19");
	printf("\n Enter first number: ");
	scanf("%d",&a);
	printf("\n Enter second number: ");
	scanf("%d",&b);
	printf("\n Enter third number: ");
	scanf("%d",&c);
	big = a > b ? (a > c ? a : c) : (b > c ? b : c) ;
    printf("\nThe biggest number is : %d", big) ;
	return 0;
}
