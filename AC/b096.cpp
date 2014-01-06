#include<iostream>
using namespace std;

int main()
{
  int ia[6];
  while(cin>>ia[0])
  {
    bool ba=false;
    for(int i=1;i<6;i++)cin>>ia[i];
    for(int i=0;i<6;i++)
      if(ia[i]!=0)ba=true;
    if(!ba)break;
    ia[1]-=ia[5];
    if(ia[1]<0)ia=0;
    ia[4]-=ia[2];
    if(ia[4]<0)ia[4]=0;
    int ib[2][2]=( {3,1} , {0,4} };
    int ic=1,id=0;
    while(ia[ib[ic][0]]>0)
    {
      ic=1-ic;
      ia[ib[ic][0]]-=ia[ib[ic][1]];
      id++;
    }
    if(ic)cout<<"You lose in "<<id<<" round(s)."<<endl;
    else cout<<"You win in "<<id<<" round(s)."<<endl;
  }
}
