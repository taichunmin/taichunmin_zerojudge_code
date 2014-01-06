#include<iostream>
using namespace std;

int main()
{
  int ta,ia,ib;
  cin>>ta;
  for(int ti=0;ti<ta;ti++)
  {
    cin>>ia>>ib;
    if(ib%ia==0)cout<<ia<<" "<<ib<<endl;
    else cout<<"-1"<<endl;
  }
  system("pause");
}
