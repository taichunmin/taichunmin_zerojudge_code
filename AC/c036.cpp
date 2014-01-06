#include<iostream>
using namespace std;

int main()
{
  double da,db,dc,dd;//井的深度,能爬多長,每天下滑多少,疲勞因子 
  double de;//目前高度 
  int ia=0;//day
  while(cin>>da>>db>>dc>>dd,da!=0)
  {
    de=ia=0;
    dd=db*dd/100;
    while(1)
    {
      ia++;
      //cout<<de<<'\t'<<db<<'\t';
      de+=db;
      //cout<<de<<'\t';
      if(de>da/* && cout<<'-'<<endl*/)break;
      de-=dc;
      //cout<<de<<endl;
      if(de<0)
      {
        ia=-ia;
        break;
      }
      db-=dd;
      if(db<0)db=0;
    }
    if(ia>0)cout<<"success on day "<<ia<<endl;
    else cout<<"failure on day "<<-ia<<endl;
  }
}
