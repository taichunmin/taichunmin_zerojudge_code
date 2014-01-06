#include<iostream>
using namespace std;

inline int direct(char ca)
{
  if(ca=='N')return 1;//北 
  if(ca=='E')return 2;//東 
  if(ca=='S')return 4;//南 
  return 8;//西 
}
inline char direct(int ia)
{
  if(ia==1)return 'N';//北 
  if(ia==2)return 'E';//東 
  if(ia==4)return 'S';//南 
  return 'W';//西 
}
inline int turn(int ia,char ca)
{
  if(ca=='L')return (ia/2==0)?(8):(ia/2);
  if(ca=='R')return (ia*2==16)?(1):(ia*2);
}

int main()
{
  int aa[51*51]={};
  int ia,ib,ic,ta,tb;
  string sa;
  cin>>ta>>tb;
  while(cin>>ia>>ib>>sa)
  {
    bool ba=false;
    ic=direct(sa[0]);
    cin>>sa;
    for(int i=0;i<sa.size();i++)
    {
      if(sa[i]!='F')ic=turn(ic,sa[i]);
      else 
      {
        ia+= (ic&2)/2 - (ic&8)/8 ;
        ib+= (ic&1) - (ic&4)/4 ;
      }
      if(ia<0 || ib<0 || ia>ta || ib>tb)
      {
        ia-= (ic&2)/2 - (ic&8)/8 ;
        ib-= (ic&1) - (ic&4)/4 ;
        if(aa[ia*51+ib]==0)
        {
          aa[ia*51+ib]=ba=true;
          break;
        }
      }
    }
    cout<<ia<<' '<<ib<<' '<<direct(ic);
    if(ba)cout<<" LOST";
    cout<<endl;
  }
}
