#include<iostream>
using namespace std;

int main()
{
  double da[101]={1};
  for(int i=1;i<101;i++)da[i]=da[i-1]*i;
  int ia,ib;
  while(cin>>ia>>ib,ia+ib)
  {
    cout<<da[ia]/da[ib]/da[ia-ib]<<endl;
  }
}
 
