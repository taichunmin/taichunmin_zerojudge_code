#include<iostream>
using namespace std;

int main()
{
  int ia,ib;
  long long la;
  while(cin>>ia>>ib)
  {
    ia+=ia%2;
    ib-=ib%2;
    la=0;
    for(int i=ia;i<=ib;i+=2)la+=i;
    cout<<la<<endl;
  }
}
  
