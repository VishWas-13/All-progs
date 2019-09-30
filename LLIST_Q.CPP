//PROGRAM TO ILLUSTRATE QUEUE.
#include<iostream.h>
#include<conio.h>
#include<process.h>
struct Node
{
	float info;
	Node *next;
	}*front,*rear,*ptr;
	Node *Create_New_Node(int);
	void insert_q();
	void display_q(Node*);
	void delete_q();
void main()
{
   clrscr();
   int ch=1,n;
   while(ch)
   {
      cout<<"\n\n\t\t\t   LINKED LIST IN QUEUE";
      cout<<"\n\n\t\tMain Menu\n";
      cout<<"\t1. Insert in Queue\n";
      cout<<"\t2. Display in Queue\n";
      cout<<"\t3. To delete any element from Queue\n";
      cout<<"\t4. To exit\n";
      cout<<"\n\t Enter your choice : ";
      cin>>ch;
      switch(ch)
      {
	 case 1:
		 clrscr();
		  cout<<"\n\n\t\t\t   LINKED LIST IN QUEUE\n";
		 cout<<"\n\t Enter Element: ";
		 cin>>n;
		 ptr=Create_New_Node(n);
		 insert_q();
		 break;
	 case 2:
		 clrscr();
		  cout<<"\n\n\t\t\t   LINKED LIST IN QUEUE\n";
		 display_q(front);
		 break;
	 case 3:
		 clrscr();
		  cout<<"\n\n\t\t\t   LINKED LIST IN QUEUE\n";
		 delete_q();
		 break;
	 case 4: exit(0);
	 default : cout<<"Wrong Choice!!!\n";
      }
   }
}
Node *Create_New_Node(int n)
{
   ptr = new Node;
 ptr->info=n;
   ptr->next=NULL;
   return ptr;
}
void insert_q()
{
   if(front==NULL)
      front=rear=ptr;
   else
   {
      rear->next=ptr;
      rear=ptr;
   }
}
void display_q(Node *front)
{
   if(front==NULL)
      cout<<"\nUNDERFLOW!!!\n";
   else
   {
      while(front!=NULL)
      {
	 cout<<front->info<<"->";
	 front=front->next;
      }
      cout<<"!!!\n";
   }
}
void delete_q()
{
   if(front==NULL)
      cout<<"\nQueue being empty!!!\n";
   else
   {
      ptr=front;
      front=front->next;
      delete ptr;
   }
   cout<<"\nOne Element deleted!!!\n";
}

