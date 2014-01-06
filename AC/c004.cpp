#include<iostream>
using namespace std;

int main()
{
  int ia,ib,ta;
  cin>>ta;
  for(int i=0;i<ta;i++)
  {
    cin>>ia>>ib;
    if(ia<ib || (ia+ib)%2 || (ia-ib)%2)cout<<"impossible"<<endl;
    else cout<<(ia+ib)/2<<' '<<(ia-ib)/2<<endl;
  }
}
