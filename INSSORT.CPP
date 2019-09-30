#include<iostream.h>
#include<conio.h>
#include<limits.h>
void Ins_sort(int A[],int);
void main()
{
	clrscr();
	int A[50],size;
	A[0]=INT_MIN;
	cout<<"\n\t\t\t\t INSERTION SORTING";
	cout<<"\n\n\t Enter the size of array: ";
	cin>>size;
	for(int i=1;i<=size;i++)
	{
		cout<<"\n\t Enter array element A["<<i<<"]: ";
		cin>>A[i];
	}
	Ins_sort(A,size);
	cout<<"\n\t\t Sorted elements are: ";
	for(i=1;i<=size;i++)
		cout<<A[i]<<"  ";
		getch();
}
void Ins_sort(int A[],int size)
{
	int i,j,temp;
	A[0]=INT_MIN;
	for(i=1;i<=size;i++)
	{
		temp=A[i];
		j=i-1;
		while(temp<A[j])
		{
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=temp;
	}

}
