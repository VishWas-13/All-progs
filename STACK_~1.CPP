//WRITE A C++ PROGRAM TO IMPLEMENT PUSH POP IN ARRAY IMPLEMENTATION STACK

#include<iostream.h>
#include<conio.h>
#include<process.h>
int pop(int[],int&);
int push(int[],int&,int);
void display(int[],int);
const int size=50;
void main()
{
   clrscr();
   int stack[size],item,top=-1,res;
   char ch='y';
   cout<<"\n\n\t\t    STACK: ARRAY IMPLEMINTION\n";
   while(ch=='y'||ch=='Y')
   {
     cout<<"\n\t Enter item for insertion:";
     cin>>item;
     res=push(stack,top,item);
     if(res==-1)
     {
      cout<<"\n\t overflow!!!aborting!!!";
      exit(1);
      }
      cout<<"\n\t the stack now is: ";
      display(stack,top);
      cout<<"\n\t want to insert more element ?(y/n)";
      cin>>ch;
      }
      clrscr();
      cout<<"\n\n\t\t    STACK: ARRAY IMPLEMINTION\n";
      cout<<"\n\t now deletion of element begins..";
      ch='y';
      while(ch=='y'||ch=='Y')
      {
      res=pop(stack,top);
      if(res==-1)
      {
	cout<<"\n\t underflow!!!! aborting!!\n";
	exit(1);
	}
	else
	{
	 cout<<"\n\t element deleted is: "<<res<<endl;
	 cout<<"\n\t the stack now is: ";
	 display(stack,top);
	 }
	 cout<<"\n\t want to delete more element?(y/n)";
	 cin>>ch;
	 }
	 }
	 int push(int stack[],int &top,int ele)
	 {
	 if  (top==size-1) return -1;
	 else
	 {
	 top++;
	 stack[top]=ele;
	 }
	 return 0;
	 }
	 int pop(int stack[],int& top)
	 {
	 int ret;
	 if(top==-1) return -1 ;
	 else
	 {
	 ret=stack[top];
	 top--;
	 }
	 return ret;
	 }
	void display (int stack[],int top)
	{
	if(top== -1) return;
	cout<<stack[top]<<"<--";
	for(int i=top-1;i>=0;i--)
	cout<<stack[i]<<"<--";
	}

