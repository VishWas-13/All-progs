/* HARD: SHORTEST ROUTE PROBLEM*/ 
#include<bits/stdc++.h> // includes all the standard c++ header files
#include<conio.h>

using namespace std;
int main()
{
 int ix,iy,fx,fy,n,i;  //ix = initial x ; iy = initial y ; fx= final x ; fy= final y.
 cout<<"\n\t\t SHORTEST ROUTE FINDER";
 cout<<"\n\n\t 1.) Enter initial points(x,y):\n\t   ";
 cin>>ix;
 cout<<"\t   ";
 cin>>iy;	 	
 cout<<"\t 2.) Enter final points(x,y):\n\t   ";
 cin>>fx;
 cout<<"\t   ";
 cin>>fy;
 cout<<"\n\t 3.) Enter number of members to be picked: ";
 cin>>n;
 vector<int> x(n); 
 vector<int> y(n);
 vector<int> a(n,0);
 for(i=0;i<n;i++)
 {	cout<<"\n\t "<<i+4<<".) Enter location of member ["<<i+1<<"]:\n\t   ";
	cin>>x[i];
	cout<<"\t   ";
	cin>>y[i];
 }
 int px=ix, py=iy, pd=0;  //px= present x ; py= present y.
 while(1)
 {
    int dist=1000,index=n+1;
    for(i=0;i<n;i++)
	{
            if(((abs(y[i]-py)+abs(x[i]-px)) < dist) && a[i]==0)
			{
                index = i;
                dist = (abs(y[i]-py)+abs(x[i]-px));
            }
 	}	
    if(index == n+1)
        break;
    pd += (abs(y[index]-py)+abs(x[index]-px));
    px = x[index];
    py = y[index];
    a[index] = 1;
 }
 pd += (abs(fy-py)+abs(fx-px));
 cout<<"\n\t\t Shortest Route Is: "<<pd;
 getch();
 return 0;
}

