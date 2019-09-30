#include<fstream.h>
#include<conio.h>
#include<ctype.h>
#include<process.h>
void main()
{
	clrscr();
	char ch;
	ifstream fin;
	int count1=0,count2=0,count3=0;
	fin.open("BOOK.txt",ios::in);
	if(!fin)
	{
		cout<<"\n\n\t\t\t\t CHARACTER READING";
		cout<<"\n\n\n\t\t!!FILE DOES NOT EXIST!!";
		getch();
		exit(0);
	}
	while(!fin.eof())
	{
		fin.get(ch);
		if(isupper(ch))
		{	count1++;
		}
	       else if (islower(ch))
		{	count2++;
		}
	       else if(isdigit(ch))
		{	count3++;
		}
	}
	cout<<"\n\n\t\t\t\t CHARACTER READING";
	cout<<"\n\n\t Number of uppercase letters= "<<count1++;
	cout<<"\n\t Numbers of lowercase letters= "<<count2++;
	cout<<"\n\t Numbers of digits= "<<count3++;
	getch();
	fin.close();
}