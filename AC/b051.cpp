#include<iostream>
using namespace std;

bool f(string sa,string sb)//�i�������@�Ӧr���W����j
{
  int len=sa.length()+sb.length();
  string sc=sa+sb,sd=sb+sa;
  bool ba=false;//0�O����j 1�O�k��j 
  for(int i=0;i<len;i++)
    if(sc[i]>sd[i])
    {
      ba=false;
      return ba;
    }
    else if(sc[i]<sd[i])
    {
      ba=true;
      return ba;
    }
}

int main()
{
  int ta;
  while(cin>>ta)
  {
    string sa[ta];
    for(int i=0;i<ta;i++)cin>>sa[i];
    string temps;
    for(int i=0;i<ta;i++)
      for(int j=i+1;j<ta;j++)
        if(f(sa[i],sa[j]))
        {
          temps=sa[i];
          sa[i]=sa[j];
          sa[j]=temps;
        }
    for(int i=0;i<ta;i++)cout<<sa[i];
    cout<<endl;
  }
}
