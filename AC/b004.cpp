#include<iostream>
#include<cmath>
#define pi 2*acos(0.0)
using namespace std;

int main()
{
  double a,b,c;
  while(cin>>c>>a)
  {
    c/=2;
    a/=2;
    b=sqrt(a*a-c*c);
    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(3);
    cout<<pi*a*b<<endl;
  }
}
    
