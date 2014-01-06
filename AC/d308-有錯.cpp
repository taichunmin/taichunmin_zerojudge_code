#include<iostream>
using namespace std;

string fa(string sa,string sb)//¨D¾l¼Æ 
{
  if(sb=="0" || sb.size()==0)return "0";
  if(sb.size()>sa.size() || (sb.size()==sa.size() && sb>sa))return sa;
  for(int i=0;i<sa.size()/2;i++)sa[i]^=sa[sa.size()-1-i]^=sa[i]^=sa[sa.size()-1-i];
  for(int i=0;i<sb.size()/2;i++)sb[i]^=sb[sb.size()-1-i]^=sb[i]^=sb[sb.size()-1-i];
  for(int i=0;i<sa.size();i++)sa[i]-='0';
  for(int i=0;i<sb.size();i++)sb[i]-='0';
  for(int i=sa.size()-sb.size();i>-1;i--)
  {
    if(i>sa.size()-sb.size())i=sa.size()-sb.size();
    bool ba=true;
    while(ba)
    {
      if(i+sb.size()>=sa.size())
        for(int j=sb.size()-1;j>-1;j--)
          if(sa[i+j]!=sb[j])
          {
            if(sa[i+j]<sb[j])ba=false;
            break;
          }
      int bb=false;
      for(int j=0;j<sb.size() && ba;j++)
      {
        if(sa[i+j]>=sb[j]+bb)
        {
          sa[i+j]-=sb[j]+bb;
          bb=false;
        }
        else
        {
          sa[i+j]+=10-sb[j]-bb;
          bb=true;
        }
      }
      for(int j=sb.size();i+j<sa.size() && bb;j++)
      {
        if(sa[i+j]>=bb)
        {
          sa[i+j]-=bb;
          bb=false;
        }
        else
        {
          sa[i+j]+=10-bb;
          bb=true;
        }
      }
      while(sa[sa.size()-1]==0)sa.resize(sa.size()-1);
    }
  }
  for(int i=0;i<sa.size()/2;i++)sa[i]^=sa[sa.size()-1-i]^=sa[i]^=sa[sa.size()-1-i];
  for(int i=0;i<sa.size();i++)sa[i]+='0';
  if(sa.size()==0)return "0";
  else return sa;
}

int main()
{
  string sa,sb;
  while(cin>>sa>>sb)
    cout<<fa(sa,sb)<<endl;
  //system("pause");
}
