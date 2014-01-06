#include<iostream>
using namespace std;

int main()
{
  int ta;
  cin>>ta;
  for(int i=0;i<ta;i++)
  {
    int ia,ib,ic,id,ie;
    cin>>ia>>ib;
    if(ia<ib)ia^=ib^=ia^=ib;
    id=ia,ie=ib;
    while(ib>0)
    {
      ic=ia%ib;
      ia=ib;
      ib=ic;
    }
    id/=ia;
    cout<<id*ie<<endl;
  }
}
