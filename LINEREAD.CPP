#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<process.h>
void main()
{       clrscr();
	char ln[500];
	cout<<"\n\n\t\t\t\t LINE READER";
	cout<<"\n\t\t\t\t -----------\n";
	ifstream fin;
	fin.open("BOOK.txt",ios::in);
	if(!fin)
	{
		cout<<"\n\n\t\t\t\t !!FILE DOES NOT EXIST!!";
		getch();
		exit(0);
	}
	cout<<"\t\t\t LINES BREAK after 20 CHARACTERS\n\n";
	while(!fin.eof())
	{
		fin.getline(ln,100);
		cout.write(ln,20)<<"\n";
	}
	getch();
	fin.close();
}