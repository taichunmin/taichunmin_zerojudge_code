#include<iostream>
using namespace std;

int main()
{
  int a,b,c;
  while(cin>>a>>b)
  {
    if(b>a)a=b;
    c=0;
    bool ba=false;
    for(int i=0;i<30;i++)
    {
      cin>>b;
      if(b==a && c<3)ba=true;
      else if(b!=0)c++;
    }
    if(ba)cout<<'Y'<<endl;
    else cout<<'N'<<endl;
  }
}
