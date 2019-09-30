#include<stdio.h>
int main()
{
	int n;
	printf("\n\t Question-24\n Enter the number till which you want to run the loop: ");
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
		if(i%2==0)
			printf("%d ",i);
		i++;
	}
	return 0;
}
