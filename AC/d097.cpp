#include<iostream>
using namespace std;

int main()
{
    int t,aa[3000];
    bool *is;
    while(cin>>t)
    {
      for(int i=0;i<t;i++)cin>>aa[i];
      is=new bool[t];
      for(int i=0;i<t;i++)is[i]=false;
      bool joll=true;
      for(int i=0;i<t-1;i++)
      {
        int team=aa[i]-aa[i+1];
        team*=(team<0)?-1:1;
        if(is[team] || team<0 || team>t-1)
        {
          joll=false;
          break;
        }
        else
          is[team]=true;
      }
      if(joll)cout<<"Jolly"<<endl;
      else cout<<"Not jolly"<<endl;
    }
}
