#include<iostream>
#include<sstream>
using namespace std;
int main()
{
  string sa;
  istringstream issa,issb;
  while(getline(cin,sa))
  {
    issa.clear();
    issa.str(sa);
    int ia,ib=0,la;
    bool ba;
    while(issa>>sa)
    {
      ba=true;
      la=sa.length();
      for(int i=0;i<la;i++)
        if(sa[i]<'0' || sa[i]>'9')
        {
          ba=false;
          break;
        }
      if(ba)
      {
        issb.clear();
        issb.str(sa);
        issb>>ia;
        ib+=ia;
      }
    }
    cout<<ib<<endl;
  }
  //system("pause");
}
