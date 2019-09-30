#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
int i=1;
class CLOTHING
{
     private:
      char code[20];
      char type[20];
      int size;
      char material[20];
      float prize;
      void calc_prize();

     public:
     CLOTHING()
     {
       strcpy(code,"NOT ASSIGNED");
	strcpy(type,"NOT ASSIGNED");
	size=0;
	prize=0;
     }
     void enter();
     void show();
};
void CLOTHING::calc_prize()
{
	if(strcmp(material,"COTTON")==0)
	{
		if(strcmp(type,"TROUSER")==0)
			prize=1500;
		 else if(strcmp(type,"SHIRT")==0)
			prize=1200;
       }
       else
       {
	if(strcmp(type,"TROUSER")==0)
			prize=1500-(1500*0.25);
	else if(strcmp(type,"SHIRT")==0)
			prize=1200-(1200*0.25);
      }

}
void CLOTHING::enter()
{
     cout<<"\n\n\t"<<i++;
     cout<<". ENTER CODE NUMBER: ";
     gets(code);
     cout<<"\n\t"<<i++;
     cout<<". ENTER TYPE OF CLOTHS(TROUSER/SHIRT): ";
     gets(type);
     cout<<"\n\t"<<i++;
     cout<<". ENTER SIZE OF ITEM(IN cm): ";
     cin>>size;
     cout<<"\n\t"<<i;
     cout<<". ENTER MATERIAL: ";
     gets(material);
     calc_prize();
}
void CLOTHING::show()
{
     cout<<"\n\n\t\t BILL:-";
     cout<<"\n\t CODE:- ";puts(code);
     cout<<"\n\t TYPE:- ";puts(type);
     cout<<"\n\t SIZE:- "<<size;
     cout<<"\n\n\t MATERIAL:- ";puts(material);
     cout<<"\n\t PRIZE:- "<<prize;
}
void main()
{
 clrscr();
 CLOTHING obj;
 cout<<"\n\n\t\t\t\t CLASS: CLOTHING";
 obj.enter();
 obj.show();
 getch();
}
