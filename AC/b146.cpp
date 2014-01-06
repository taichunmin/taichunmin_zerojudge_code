#include<iostream>
using namespace std;

int main()
{
  int da[7],ia,ib;
  while(cin>>ia>>ib)
  {
    da[0]=ia+ib;
    for(int i=1;i<7;i++)
    {
      cin>>ia>>ib;
      da[i]=ia+ib;
    }
    ia=da[0];
    ib=0;
    for(int i=1;i<7;i++)
      if(da[i]>ia)
      {
        ia=da[i];
        ib=i;
      }
    if(ia<9)cout<<0<<endl;
    else cout<<ib+1<<endl;
  }
}
