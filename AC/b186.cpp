#include<iostream>
using namespace std;

int main()
{
  int a,b,c,d;
  while(cin>>a>>b>>c)
  {
    d=a/10;
    if(d<(c/10))d=c/10;
    cout<<a<<" �ӻ氮�A"<<b+d<<" �����J�O�A"<<c<<" �ӳJ�|�C"<<endl;
  }
}
