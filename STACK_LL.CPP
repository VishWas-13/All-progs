#include<iostream.h>
#include<conio.h>
#include<process.h>
struct node
{
 int info;
 node *next;
}*top,*newptr,*save,*ptr;
node *create_new_node(int);
void push(node *);
void pop( );
void display(node *);
void main( )
{  top=NULL;
   int inf;
   char ch='y';
   clrscr( );
   while(ch=='y'||ch=='Y')
  {   clrscr( );
       cout<<" Enter information for the new node...\n";
       cin>>inf;
      newptr=create_new_node(inf);
      if(newptr==NULL)
     {   cout<<"\n Cannot create new node!!! Aborting!!!\n";
	  exit(1);     }
  else
   push(newptr);
   cout<<"\n Now linked stack is: \n";            display(top);
   cout<<"\n Press Y to enter more nodes, n to exit...";
   cin>>ch;
  }
 do
 {   cout<<"\n The stack now is: \n";
     display(top);
     getch( );
    cout<<"Want to pop an element? (y/n)...";
    cin>>ch;
    if(ch=='y'||ch=='Y')
    pop();
}
while(ch=='y'||ch=='Y');
}
 node *create_new_node(int n)
  {
   ptr= new node;
   ptr-> info=n;
   ptr-> next=NULL;
   return ptr;
}
void push(node *np)
{
 if(top==NULL)
 top=np;
 else
 {  save=top;
     top=np;
    np->next=save;
 }
}
void pop( )
{
 if(top==NULL)
 {
  cout<<" UNDERFLOW!!!\n";
  exit(1);
 }
 else
 {
  ptr=top;
  top=top->next;
  delete ptr;
 }
}
void display(node *np)
{
 while(np!=NULL)
  {  cout<<np->info<<"->";
      np=np->next;
  }
 cout<<"!!!\n";
}






