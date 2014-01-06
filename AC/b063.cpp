#include<iostream>
using namespace std;

int main()
{
  int da[1000][2],ta,ia,ib,ma,mb,mc;
  while(cin>>ta)
  {
    ib=2147483647;
    for(int i=0;i<ta;i++)cin>>da[i][0]>>da[i][1];
    for(int i=0;i<ta;i++)
    {
      mc=0;
      for(int j=0;j<ta;j++)
      {
        if(i==j)continue;
        ma=da[i][0]-da[j][0];
        mb=da[i][1]-da[j][1];
        if(ma<0)ma*=-1;
        if(mb<0)mb*=-1;
        mc+=ma+mb;
      }
      if(ib>mc)
      {
        ib=mc;
        ia=i;
      }
    }
    cout<<da[ia][0]<<' '<<da[ia][1]<<endl;
    cout<<ib<<endl;
  }
}
