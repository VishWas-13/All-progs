#include<stdio.h>
int main()
{
	int a,b,i,j,count;
	count=0;
	printf("Enter any number: ");
	scanf("%d",&a);
	printf("\n\t Enter another number: ");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				count++;
			else
				continue;
		}
		if(count==0)
			printf("\n %d",j);
		else
			continue;
	}
	return 0;
}
