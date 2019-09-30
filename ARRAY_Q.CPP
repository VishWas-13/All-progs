//Program that illustrate operations in Array-Queue.
#include<iostream.h>
#include<conio.h>
#include<process.h>
int Remove(int[]);
int Insert(int[],int);
void Display(int[],int,int);
const int size=50;
int Queue[size],front=-1,rear=-1;

void main()
{
	int item,res;
	char ch='y';
	clrscr( );
	cout<<"\n\n\t\t\t\t ARRAY-QUEUE\n\n";
	while(ch=='y'||ch=='Y')
	{
		cout<<"\n\t Enter a item for insertion: ";
		cin>>item;
		res=Insert(Queue,item);
		if(res==-1)
		{
			cout<<"\n\t OVERFLOW!!! Aborting!!!";
			getch();
			exit(0);
		}
		cout<<"\n\t Now the queue(FRONT TO REAR) is:- \n\t ";
		Display(Queue,front,rear);
		cout<<"\n\t Want to insert more elements?(y/n): ";
		cin>>ch;
	}
	clrscr();
	cout<<"\n\n\t\t\t\t ARRAY-QUEUE";
	cout<<"\n\n\t Now deletion of the elements begin: \n";
	cout<<"\n\t\tElements in queue are: ";
	Display(Queue,front,rear);
	cout<<"\n";
	ch='y';
	while(ch=='y'||ch=='Y')
	{
		res=Remove(Queue);
		if(res==-1)
		{
			cout<<"\n\n\t\t UNDERFLOW!!! Aborting!!!";
			getch();
			exit(0);
		}
		else
		{
			cout<<"\n\t Element deleted is: "<<res;
			cout<<"\n\t The Queue now is: \n\t ";
			Display(Queue,front,rear);
		}
		cout<<"\tWant to delete more elements?(y/n): ";
		cin>>ch;
	}
}
int Insert(int Queue[],int ele)
{
	if(rear==size-1)
		return -1;
	else if(rear==-1)
	{
		front=rear=0;
		Queue[rear]=ele;
	}
	else
	{
		rear++;
		Queue[rear]=ele;
	}
	return 0;
}
int Remove(int Queue[])
{
	int ret;
	if(front==-1)
		return -1;
	else
	{
		ret=Queue[front];
		if(front==rear)
			front=rear=-1;
		else
			front++;
	}
	return ret;
}
void Display(int Queue[],int front,int rear)
{
	if(front==-1)
		return;
	for(int i=front;i<rear;i++)
		cout<<Queue[i]<<"<-";
	cout<<Queue[rear]<<endl;
}

