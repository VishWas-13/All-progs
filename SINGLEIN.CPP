#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int i=1;
class emp
{
	private:
		int eno;
		char ename[20];
	public:
		void readdata()
		{
			cout<<"\n\n\t"<<i++;
			cout<<". ENTER EMPLOYEE NO. = ";
			cin>>eno;
			cout<<"\n\t"<<i++<<". ENTER EMPLOYEE NAME = ";
			gets(ename);
		}
		void dispdata()
		{       cout<<"\n\n\t\t SALARY";
			cout<<"\n\t EMPLOYEE NO. = "<<eno;
			cout<<"\n\t EMPLOYEE NAME = ";
			puts(ename);
		}
};
class emp_salary:public emp
{
	 float basic;
	 float pf;
	 float hra;
	 float da;
	 float netsal;
	public:
		void cal_salary()
		{
			da=basic*.20;
			hra=basic*.30;
			pf=basic*.10;
			netsal=(basic+da+hra)-pf;
		}
		void getdata()
		{
			readdata();
			cout<<"\n\t"<<i++<<". ENTER BASIC = ";
			cin>>basic;
			cal_salary();
		}
		void display()
		{
			dispdata();
			cout<<"\n\t BASIC = "<<basic;
			cout<<"\n\t HRA = "<<hra;
			cout<<"\n\t DA = "<<da;
			cout<<"\n\t NET SALARY = "<<netsal;
		}
};
void main()
{
	clrscr();
	emp_salary obj;
	cout<<"\n\n\t\t\t    SINGLE INHERITANCE";
	obj.getdata();
	obj.display();
	getch();
}