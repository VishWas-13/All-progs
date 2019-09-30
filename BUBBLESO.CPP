#include<iostream.h>
#include<conio.h>
void bubblesort(int[],int);
void main()
{
	 clrscr();
	 int A[50],size,i;
	 cout<<"\n\n\t\t\t\t BUBBLE SORTING";
	 cout<<"\n\n\t ENTER THE SIZE OF ARRAY: ";
	 cin>>size;
	 for(i=0; i<size; i++)
	 {      cout<<"\n\t"<<i+1;
		cout<<". ENTER ARRAY ELEMENT A["<<i+1<<"]: ";
		cin>>A[i];
	 }
	 bubblesort(A,size);
	 getch();
}
void bubblesort(int A[],int size)
{
	int i,j,temp;
	for(i=0; i<size; i++)
	{
		for(j=0; j<size-i-1; j++)
		{
			if(A[j]>A[j+1])
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
	cout<<"\n\n\t SORTED ElEMENT ARE: ";
	for(i=0; i<size; i++)
	{
		cout<<A[i]<<" ; ";
	}
}
