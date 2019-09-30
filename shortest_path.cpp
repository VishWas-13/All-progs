#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main(){
 int ix,iy,fx,fy,n,i;
 cin>>ix>>iy>>fx>>fy;
 cin>>n;
 vector<int> x(n);
 vector<int> y(n);
 vector<int> a(n,0);
 for(i=0;i<n;i++)
    cin>>x[i]>>y[i];
 int px=ix, py=iy, pd=0;
 while(1){
    int dist=1000,index=n+1;
    for(i=0;i<n;i++){
            if(((abs(y[i]-py)+abs(x[i]-px)) < dist) && a[i]==0){
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
 cout<<pd;
 getch();
 return 0;
}
