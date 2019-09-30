#include<iostream.h>
#include<conio.h>
int i=1;
class student
{
	protected:
	       int roll,marks1,marks2;
	public:
		void get()
		{
			cout<<"\n\n\t"<<i++<<". ENTER ROLL NO.= ";
			cin>>roll;
			cout<<"\n\t"<<i<<".a) ENTER MARKS1 = ";
			cin>>marks1;
			cout<<"\n\t"<<i++<<".b) Enter MARKS2 = ";
			cin>>marks2;
		}
};
class sports
{
	protected:
		int marks_sports;
	public:
		void getsm()
		{
			cout<<"\n\t"<<i<<". ENTER SPORTS MARKS = ";
			cin>>marks_sports;
		}
};
class result: public student,public sports
{
	int total,average;
	public:
		void display()
		{
			total=(marks1+marks2+marks_sports);
			average=total/3;
			cout<<"\n\n\t\t RESULT:-";
			cout<<"\n\t ROLL NO.: "<<roll<<"\n\t TOTAL = "<<total;
			cout<<"\n\t AVERAGE = "<<average;
		}
};
void main()
{
	clrscr();
	result obj;
	cout<<"\n\n\t\t\t   MULTIPLE INHERITANCE";
	obj.get();
	obj.getsm();
	obj.display();
	getch();
}



