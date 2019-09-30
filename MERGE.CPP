#include<iostream.h>
#include<conio.h>
void Merge(int [],int,int [],int,int []);
void main()
{
	clrscr();
	int A[50],B[50],C[50],MN=0,M,N,i;
	cout<<"\n\t\t\t\t MERGE SORTING";
	cout<<"\n\n\t Enter the size of first array: ";
	cin>>M;
	for(i=0;i<M;i++)
	{
		cout<<"\n\t Enter first array element M["<<i<<"](assending): ";
		cin>>A[i];
	}
	cout<<"\n\n\t Enter the size of second array: ";
	cin>>N;
	MN=M+N;	// array C's size calculated
	for(i=0;i<N;i++)
	{
		cout<<"\n\t Enter second array element M["<<i<<"](ascending): ";
		cin>>B[i];
	}
	Merge(A,M,B,N,C);
		cout<<"\n\n\t Merged array: ";
	for(i=0;i<MN;i++)
	{
		cout<<C[i]<<"   ";
	}
	getch();
}
void Merge(int A[],int M,int B[],int N,int C[])
{
	int a,b,c;
	for(a=0,b=0,c=0;a<M&&b<N; )
	{
		if(A[a]<=B[b])
			C[c++]=A[a++];
		else
			C[c++]=B[b++];

	}
	if(a<M)
	{
		while(a<M)
			C[c++]=A[a++];
	}
	else
	{
		while(b<N)
		C[c++]=B[b++];
	}

}
