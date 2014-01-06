#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  int a,b,c,d;
  double da,db;
  while(cin>>a>>b>>c)
  {
    d=b*b-4*a*c;
    if(d>0)
    {
      //da=-1*b;
      da=sqrt(d+0.0);
      db=-da;
      da-=b,db-=b;
      da/=2*a,db/=2*a;
      cout<<"Two different roots x1="<<da<<" , x2="<<db<<endl;
    }
    else if(d==0)
    {
      da=b*-1/2/a;
      cout<<"Two same roots x="<<da<<endl;
    }
    else if(d<0)
      cout<<"No real root"<<endl;
  }
}
