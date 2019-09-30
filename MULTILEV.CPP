#include<iostream.h>
#include<conio.h>
class student
{
	protected:
		int roll;
	public:
		void get_number(int a)
		{	roll=a;		}
		void put_number()
		{	cout<<"\n\nROLL NUMBER: "<<roll<<"\n";
		}
};
class test: public student
{
	protected:
		float sub1,sub2;
	public:
		void get_marks(float x,float y)
		{	sub1=x;
			sub2=y;
		}
		void put_marks()
		{	cout<<"\nMARKS OF SUBJECT 1 = "<<sub1;
			cout<<"\nMARKS OF SUBJECT 2 = "<<sub2;
		}
};
class result: public test
{
	private:
		float total;
	public:
		void display()
		{	total=sub1+sub2;
			put_number();
			put_marks();
			cout<<"\n\tTOTAL = "<<total;
		}
};
void main()
{
	clrscr();
	result student;
	student.get_number(24);
	student.get_marks(45,65);
	student.display();
	getch();
}