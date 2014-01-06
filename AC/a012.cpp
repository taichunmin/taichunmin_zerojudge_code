#include<iostream>
using namespace std;

int main()
{
  long long ia,ib;
  while(cin>>ia>>ib)
  {
    ia-=ib;
    if(ia<0)ia*=-1;
    cout<<ia<<endl;
  }
}
