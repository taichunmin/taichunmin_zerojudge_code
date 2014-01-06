#include<iostream>
using namespace std;
int main()
{
  int ta,ia,ic;
  while(cin>>ta)
  {
    bool ba[1000]={};
    ic=0;
    for(int i=0;i<ta;i++)
    {
      cin>>ia;
      if(ba[ia-1])ic++;
      else ba[ia-1]=true;
    }
    cout<<ta-ic<<endl;
    bool bb=true;
    for(int i=0;i<1000;i++)
      if(ba[i])
      {
        if(bb)bb=false;
        else cout<<' ';
        cout<<i+1;
      }
  }
}
