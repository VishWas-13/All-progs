#include<iostream.h>
#include<conio.h>
void lSearch(int[],int,int);
void main()
{  clrscr();
   int a[50];
   int size=0;
   int n=0;
   int i;
   cout<<"\n\n\t\t\t\t LINEAR SEARCH";
   cout<<"\n\n\t Enter size of an array: ";
   cin>>size;
   cout<<"\n";
   for(i=0;i<size;i++)
   {     cout<<"\n\t"<<i+1;
	 cout<<".Enter element in ["<<i<<"] : ";
	 cin>>a[i];
   }
   cout<<"\n\n\t Enter which element you want to search: ";
   cin>>n;
   lSearch(a,size,n);
}
void lSearch(int a[],int size,int n)
{
   int flap=0;
   int pos=0;

   for (int i=0;i<size;i++)
   {
      if(a[i]==n)
      {
      flap=1;
      pos=i;
      break;
      }
   }
      if(flap==1)
      cout<<"\n\t Item found at position "<<pos<<" and the item is : "<<n;
      else
      cout<<"\n\t Item not found";
      getch();

}