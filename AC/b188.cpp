#include<iostream>
using namespace std;

int ia,ib,ic;

string fb(int ia)
{
  char ca[15];
  string sa="";
  int ib=0;
  while(ia>0)
  {
    ca[ib++]=ia%10+'0';
    ia/=10;
  }
  if(ib>0)
    for(int i=ib-1;i>-1;i--)sa+=ca[i];
  else sa="0";
  return sa;
}

int fa(int xa=0,int xb=0,string sa="",int fn=0)
{
  if(sa.length())sa+=" -> ";
  sa+="("+fb(xa)+","+fb(xb)+")";
  if((xa+xb)==ic)
  {
    cout<<sa<<endl;
    return 1;
  }
  int na,nb;
  switch(fn)
  {
    case 0:
      na=ia;
      nb=xb;
      fn=1;
      break;
    case 1:
      if(xa==ia && xb==ib)return 0;
      if(xa>ib-xb)
      {
        na=xa-ib+xb;
        nb=ib;
        fn=2;
      }
      else
      {
        na=0;
        nb=xa+xb;
        fn=0;
      }
      break;
    case 2:
      na=xa;
      nb=0;
      fn=1;
      break;
  }
  if(fa(na,nb,sa,fn))return 1;
  else return 0;
}

int main()
{
  while(cin>>ia>>ib>>ic)
  {
    bool ba=true;
    if(ia+ib<ic)ba=false;
    if(ia%2==0 && ib%2==0 && ic%2==1)ba=false;
    if(ba)ba=fa();
    if(!ba)cout<<"NO"<<endl;
  }
}
