#include<iostream>
using namespace std;

int main()
{
  int a;
  while(cin>>a)
  {
    if(!a)cout<<0<<endl;
    else if(a>0)cout<<1<<endl;
    else cout<<-1<<endl;
  }
}
