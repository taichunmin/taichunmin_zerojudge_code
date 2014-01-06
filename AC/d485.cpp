#include<iostream>
using namespace std;

int main()
{
  int ia,ib;
  while(cin>>ia>>ib)
  {
    cout<<(ib-(ib%2)-ia-(ia%2))/2+1<<endl;
  }
}
  
