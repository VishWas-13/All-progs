#include<stdio.h>
//#include<stdlib.h>
int main()
{
	int a,b,i,j,temp,flag;
	printf("\n\t Enter any two numbers: ");
	scanf("%d  %d",&a,&b);
//	if(b<2);
//	{
//		printf("\n\t There are no primes upto %d",b);
//		exit(0);
//	}
	printf("\n\t Prime numbers are: \n");
	temp=a;
	if(a%2==0)
		a++;
	for(i=a;i<=b;i=i+2)
	{
		flag=0;
		for(j=2;j<=i/2;j++)
		{
			if((i%j)==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0);
			printf("\n %d",i);
			
	}
	return 0;
}
