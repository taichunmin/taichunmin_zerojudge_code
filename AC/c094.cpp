#include<iostream>
using namespace std;

int main()
{
  int ia,ib,ic,id,ie;
  int aa[20];
  bool ba;
  for(int ta=1;cin>>ia>>ib>>ic;ta++)
  {
    if(ia==0 && ib==0 && ic==0)break;
    id=ie=0;
    ba=true;
    for(int i=0;i<ia;i++)cin>>aa[i];
    cout<<"Sequence "<<ta<<endl;
    for(int i=0;i<ib;i++)
    {
      cin>>ia;
      id+=aa[ia-1];
      aa[ia-1]=-aa[ia-1];
      if(id>ie)ie=id;
      if(id>ic)ba=false;
    }
    if(ba)
    {
      cout<<"Fuse was not blown."<<endl;
      cout<<"Maximal power consumption was "<<ie<<" amperes."<<endl;
    }
    else cout<<"Fuse was blown."<<endl;
    cout<<endl;
  }
}
