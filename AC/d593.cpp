#include<iostream>
using namespace std;

int main()
{
  int ta,ia,ib;
  cin>>ta;
  for(int ti=0;ti<ta;ti++)
  {
    cin>>ia;
    while(ia/10)
    {
      ib=0;
      while(ia>0)
      {
        ib+=ia%10;
        ia/=10;
      }
      ia=ib;
    }
    cout<<ia;
    if(ia==2)cout<<", Yes"<<endl;
    else cout<<", No"<<endl;
  }
  //system("pause");
}
