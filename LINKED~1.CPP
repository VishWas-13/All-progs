#include<iostream.h>
#include<conio.h>
#include<process.h>
struct Node
{
	int info;
	Node *next;
}*start,*newptr,*save,*ptr,*rear;
Node * Create_New_Node(int);
void insert_beg(Node *);
void display(Node *);
void insert_end(Node*);
void Delnode();
void main()
{
start= rear= NULL;
int inf,a;
char ch='y';
while(ch=='y'||ch=='Y')
{
clrscr();
cout<<"\n\n\t\t\t\t LINKED LIST";
cout<<"\n\t Enter information for new  node:\n";
cin>>inf;
cout<<"\n\t Creating node...\n\t Press Enter to continue!!!";
getch();
newptr=Create_New_Node(inf);
if (newptr!=NULL)
{
  cout<<"\n\t New node created sucessfully.\n\t Press Enter!!!\n";
  display(start);
  getch();
}
else
{
  cout<<"\n\t Cannot create new node!! Aborting\n";
  getch();
  exit(1);
}
cout<<"\n\t insert in beg(1) or end(2) ";
cin>>a;
switch (a)
{
	case 1:
	cout<<"\n\t Now inserting this node in the beginning of list";
	cout<<"\n\t Press enter to continue\n";
	getch();
	insert_beg(newptr);
	display(start);
	cout<<"\n\t Press Y to enter new nodes: ";
	cin>>ch;
	break;
	case 2: cout<<"\n\t Now inserting this node in the end of list";
	cout<<"\n\t Press enter to continue..: ";
	getch();
	insert_end(newptr);display(start);
	cout<<"\n\t Press Y to enter new nodes";
	cin>>ch;
	}
 }
do
{
  cout<<"Now the list\n";
   display(start) ;
  cout<<"Deleting elements\n";
  cin>>ch;
  if(ch=='y'||ch=='Y')
	Delnode();
 cout<<"Wnat to delete (more) elements\n";
 cin>>ch;
 }while(ch=='y'||ch=='Y');
}
Node * Create_New_Node(int n)
{
ptr=new Node;
ptr->info=n;
ptr->next=NULL;
return ptr;
}
void insert_beg(Node *np)
{
if (start==NULL)
  {start=np;
  rear=np;}
else
  {
  np->next=start;
  start=np;


  }
}
void insert_end(Node* np)
{
if(start==NULL)
{
start=np;
rear=np;
}
else
{rear->next=np;
rear=np;
 }
}
void Delnode()
{
if(start==NULL)
cout<<"Overflow\n";
else
{ ptr=start;
start=start->next;
delete ptr;
}
}
void display(Node *np)
{
while(np!=NULL)
 {
 cout<<np->info<<"->";
 np=np->next;
 }
cout<<"!!!\n";
}















