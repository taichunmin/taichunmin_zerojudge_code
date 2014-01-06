#include<iostream>
using namespace std;

int main()
{
  int ia,ib,ic;
  while(cin>>ia>>ib)
  {
    if(ib>ia)ia^=ib^=ia^=ib;
    while(ib!=0)
    {
      ic=ia%ib;
      ia=ib;
      ib=ic;
    }
    cout<<ia<<endl;
  }
}
