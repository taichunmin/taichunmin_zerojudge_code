#include<iostream>
#include<sstream>
using namespace std;

int main()
{
  string sa;
  istringstream fin;
  long long la,lb,lc;
  while(getline(cin,sa))
  {
    if(sa=="0 0")break;
    fin.clear();
    fin.str(sa);
    fin>>la;
    if(la==-1)
    {
      lc=0;
      cout<<(sa[sa.size()-1]%2==0)*2-1<<endl;
      continue;
    }
    else if(la==0)
    {
      cout<<0<<endl;
      continue;
    }
    fin>>lb;
    lc=1;
    while(lb>0)
    {
      if(lb%2)lc*=la;
      la*=la;
      lb/=2;
    }
    cout<<lc<<endl;
  }
  cout<<"All Over."<<endl;
  //system("pause");
}
