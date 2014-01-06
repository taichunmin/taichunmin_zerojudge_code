#include<iostream>
using namespace std;

int main()
{

  int va[10001];
  for(int i=0;i<=10000;i++)
    va[i]=i*i;
  int ia,ib,ic;
  while(cin>>ia>>ib,ia+ib)
  {
    if(ia>ib)ia^=ib^=ia^=ib;
    bool ba=false;
    ic=va[ib]-va[ia];
    for(int i=1;i<ib;i++)
      if(ic==va[i])
      {
        ba=true;
        cout<<i<<endl;
      }
    ic=va[ia]+va[ib];
    for(int i=ib+1;i<10001;i++)
      if(ic==va[i])
      {
        ba=true;
        cout<<i<<endl;
      }
    if(!ba)cout<<"Wrong"<<endl;
  }
}
