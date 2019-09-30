#include<stdio.h>
int main()
{
	int n,i,j;
	printf("\n\t Question-24\n Enter the number till which you want to run the loop: ");
	scanf("%d",&n);
	for(j=1,i=1;j<=n;i=i+2,j++)
	{
		printf("\n %d ",i);
	}
	return 0;
}


