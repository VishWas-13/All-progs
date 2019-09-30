#include<stdio.h>
int main()
{
	int a,x;
	printf("\n\t Question - 20\n Enter any number: ");
	scanf("%d",&a);
	x=((a%2)==0)?printf("\n %d is even",a):printf("\n %d is odd",a);
	return 0;
}
