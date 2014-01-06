#include<iostream>
using namespace std;
int main()
{
  string sa,sb;
  int ia[128];
  while(getline(cin,sa))
  {
    getline(cin,sb);
    int la=sa.length(),lb=sb.length();
    bool ba=true;
    for(int i=0;i<128;i++)ia[i]=0;
    if(la!=lb)ba=false;
    for(int i=0;ba && i<la;i++)
    {
      ia[sa[i]+0]++;
      ia[sb[i]+0]--;
    }
    for(int i=0;ba && i<128;i++)
      if(ia[i]!=0)ba=false;
    if(ba)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
  system("pause");
}
