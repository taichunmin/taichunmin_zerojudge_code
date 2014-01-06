#include<iostream>
using namespace std;

int main()
{
  int ta,ia[4],ib; cin>>ta;
  for(int i=0;i<ta;i++,ib=0)
  {
    for(int j=0;j<4;j++)cin>>ia[j];
    if(ia[0]+ia[2]==ia[1]*2)ib=1;//µ¥®t
    for(int j=0;j<4;j++)cout<<ia[j]<<' ';
    if(ib==0)cout<<ia[3]/ia[2]*ia[3]<<endl;
    else cout<<ia[3]-ia[2]+ia[3]<<endl;
  }
}
