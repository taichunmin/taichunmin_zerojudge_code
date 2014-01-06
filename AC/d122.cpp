#include<iostream>
using namespace std;

int main()
{
  long long ia,ib;
  while(cin>>ia)
  {
    ib=0;
    while(ia>0)
    {
      ib+=ia/=5;
    }
    cout<<ib<<endl;
  }
}
