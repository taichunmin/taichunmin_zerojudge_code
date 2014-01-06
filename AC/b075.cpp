#include<iostream>
using namespace std;

int main()
{
  int ta;cin>>ta;
  for(int t1=0;t1<ta;t1++)
  {
    int tb;cin>>tb;
    int ia[8];
    char ca;
    for(int i=0;i<2;i++)cin>>ia[i*2]>>ca>>ia[i*2+1];
    for(int t2=0;t2<tb;t2++)
    {
      string sa;
      cin>>sa>>ia[4]>>ca>>ia[5];
      for(int i=0;i<2;i++)
      {
        ia[7]=ia[i*2+1]-ia[5];
        ia[6]=ia[i*2]-ia[4];
        if(ia[7]<0)
        {
          ia[6]--;
          ia[7]+=60;
        }
        ia[6]=(ia[6]+24)%24;
        cout.width(2);
        cout.fill('0');
        cout<<ia[6]<<':';
        cout.width(2);
        cout.fill('0');
        cout<<ia[7];
        if(i==0)cout<<' ';
        else cout<<endl;
      }
    }
  }
}
