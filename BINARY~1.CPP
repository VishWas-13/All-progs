#include<iostream.h>
#include<conio.h>
void bsearch(int[],int,int);
void main()
{
	clrscr();
	int A[50],size,item,i;
	cout<<"\n\n\t\t\t\t BINARY SEARCH";
	cout<<"\n\n\t ENTER THE SIZE OF ARRAY: ";
	cin>>size;
	for(i=0;i<size;i++)
	{       cout<<"\n\t"<<i+1;
		cout<<". ENTER ARRAY ["<<i+1<<"]: ";
		cin>>A[i];
	}
	cout<<"\n\t Enter the element you want to search: ";
	cin>>item;
	bsearch(A,size,item);
	getch();
}
void bsearch(int A[],int size, int item)
{
	int beg, last, mid;
	beg=0;
	last=size-1;
	while(beg<=last)
	{
		mid=(beg+last)/2;
		if(A[mid]==item)
		{
			cout<<"\n\t Item found at position: "<<mid+1<<".";
			return;
		}
		else if(item>A[mid])
		{
			beg=mid+1;
		}
		else if(item<A[mid])
		{
			last=mid-1;
		}
	}
	cout<<"!!ITEM NOT FOUND!!";
}






