#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int i=1;
class RESORT
{
    private:
    int rno;
    char name[20];
    float charges;
    int days;
    float compute();

    public:
    void getinfo();
    void dispinfo();
 };
 float RESORT::compute()
 {
      float Amount=days*charges;
      if(Amount>11000)
	Amount=Amount*1.02;
      return Amount;
 }
 void RESORT::getinfo()
 {
      cout<<"\n\n\t"<<i++;
      cout<<". ENTER YOUR ROOM NUMBER:- ";
      cin>>rno;
      cout<<"\n\t"<<i++;
      cout<<". ENTER CUSTOMER NAME:- ";
      gets(name);
      cout<<"\n\t"<<i++;
      cout<<". ENTER PER DAY CHARGES{IN INR}:- ";
      cin>>charges;
      cout<<"\n\t"<<i;
      cout<<". ENTER NUMBER OF DAYS:- ";
      cin>>days;
  }
  void RESORT::dispinfo()
  {
       cout<<"\n\n\t\t BILL:-";
       cout<<"\n\n\t NAME: ";puts(name);
       cout<<" \n\t ROOM NUMBER: "<<rno;
       cout<<" \n\t NUMBER OF DAYS: "<<days;
       cout<<" \n\t CHARGES: "<<charges;
       cout<<" \n\t TOTAL AMOUNT: "<<compute();
  } 
 void main()
 {
   clrscr();
   RESORT obj;
   cout<<"\n\n\t\t\t\t CLASS: RESORT";
   obj.getinfo();
   obj.dispinfo();
   getch();
 } 
