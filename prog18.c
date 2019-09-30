#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n\t Enter 3 Numbers: ");
	scanf("%d",&a);
	scanf(" %d",&b);
	scanf(" %d",&c);
	if((a>b)&&(a>c))
		printf("\n\t%d is largest",a);
	else if((b<c)&&(a<c))
		printf("\n\t%d is largest",c);
	else if((a<b)&&(b>c))
		printf("\n\t%d is largest",b);

	else
		printf("\n\t Invalid");
	return 0;
}
