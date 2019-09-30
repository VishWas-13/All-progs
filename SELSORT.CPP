#include<iostream.h>
#include<conio.h>
void Selectsort(int A[],int);
void main()
{
	clrscr();
	int A[50],size;
	cout<<"\n\t\t\t\t SELECTION SORTING";
	cout<<"\n\n\t Enter the size of array: ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<"\n\t Enter array element A["<<i<<"]: ";
		cin>>A[i];
	}
	Selectsort(A,size);
	getch();
}
void Selectsort(int A[],int size)
{
	int i,j,temp,small,pos;
	for(i=0;i<size-1;i++)
	{
		small=A[i];
		pos=i;
		for(j=i+1;j<size;j++)
		{
			if(small>A[j])
			{
				small=A[j];
				pos=j;
			}
		}
		temp=A[i];
		A[i]=A[pos];
		A[pos]=temp;
	}
	cout<<"\n\t\t Sorted elements are: ";
	for(i=0;i<size;i++)
		cout<<A[i]<<" ; ";
}
