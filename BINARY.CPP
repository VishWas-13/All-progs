#include<fstream.h>
#include<conio.h>
#include<process.h>
int i;
class Student
{
  char name[40];
  float CGPA;
  float marks;
 public:
  void getdata();
  void display();
};
void Student::getdata()
{
	char ch;
	cin.get(ch);
	cout<<"\n\n"<<i<<".";
	cout<<"\t Enter name: ";
	cin>>name;
	cout<<"\n\t Enter CGPA: ";
	cin>>CGPA;
	cout<<"\n\t Enter marks: ";
	cin>>marks;
}
void Student::display()
{
	cout<<"\n\n"<<i<<".";
	cout<<"\t Name: "<<name<<"\n";
	cout<<"\t CGPA: "<<CGPA<<"\n";
	cout<<"\t Marks: "<<marks<<"\n";
}
void main()
{
	clrscr();
	int no;
	Student arts[5];
	fstream file;
	file.open("Student.txt",ios::in|ios::out|ios::binary);
	if(!file)
	{
		cout<<"!!!-File does not exist-!!!";
		getch();
		exit(0);
	}
	cout<<"\n\n\t\t\t\t BINARY FILE";
	cout<<"\n\n\t Enter number of student's data to be stored: ";
	cin>>no;
	for(i=1;i<=no;i++)
	{
		arts[i].getdata();
		file.write((char*)&arts[i],sizeof(arts[i]));
	}
	clrscr();
	file.seekg(0);
	cout<<"\n\n\t\t\t\t BINARY FILE";
	cout<<"\n\n\t The content of Stu.dat are shown below :- \n";
	for(i=1;i<=no;i++)
	{
		file.read((char*)&arts[i],sizeof(arts[i]));
		arts[i].display();
		cout<<"\n";
	}
	file.close();
	getch();
}