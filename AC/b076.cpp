#include<iostream>
using namespace std;

int main()
{
  int ta;cin>>ta;
  for(int t1=0;t1<ta;t1++)
  {
    int tb;cin>>tb;
    string sa[2],sb[2];
    int ia,ib;
    cin>>sa[0]>>sa[1]>>ia;
    for(int t2=1;t2<tb;t2++)
    {
      cin>>sb[0]>>sb[1]>>ib;
      if(ia>ib)
      {
        sa[0]=sb[0];
        sa[1]=sb[1];
        ia=ib;
      }
    }
    if(ia>-1)cout<<"Are you kidding me?"<<endl;
    else cout<<sa[0]<<' '<<sa[1]<<endl;
  }
}
