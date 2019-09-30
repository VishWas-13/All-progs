#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<process.h>
void main()
{       clrscr();
	char wd[20];
	ifstream fin;
	int count1=0,count2=0;
	cout<<"\n\n\t\t\t\t WORD READING";
	fin.open("KBC.txt",ios::in);
	if(!fin)
	{
		cout<<"\n\t\t!!FILE DOES NOT EXIST!!";
		exit(0);
	}
	while(!fin.eof())
	{
		fin>>wd;
		if(strcmpi(wd,"this")==0)
		{	count1++;
		}
	       else if (strcmpi(wd,"these")==0)
		{	count2++;
		}

	}

	cout<<"\n\n\t NO OF This = "<<count1++;
	cout<<"\n\t NO OF These = "<<count2++;
	getch();
	fin.close();
}