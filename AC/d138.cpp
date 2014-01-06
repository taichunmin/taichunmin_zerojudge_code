#include<iostream>
using namespace std;

int main()
{
  unsigned long long la,lb,lc;
  while(cin>>la>>lb>>la>>lb>>lc)
  {
    lc+=la+lb;
    lc=lc/2+1;
    if(lb>lc)cout<<"Must be a loser."<<endl;
    else cout<<lc-lb<<endl;
  }
  //system("pause");
}
