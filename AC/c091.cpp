#include<iostream>
using namespace std;

bool fa(string sa,int ia)
{
  int ib=0;
  bool ba=false;
  for(int i=0;i<sa.size();i++)
    switch(sa[i])
    {
      case 'a':case 'e':case 'i':case 'o':case 'u':case 'y':
        ba=true;
        break;
      default:
        if(ba)
        {
          ib++;
          ba=false;
        }
    }
  if(ba)ib++;
  return ia!=ib;
}

int main()
{
  string sa[3];
  while(getline(cin,sa[0],'/'))
  {
    getline(cin,sa[1],'/');
    getline(cin,sa[2]);
    if(sa[0]=="e" && sa[1]=="o" && sa[2]=="i")break;
    bool ba=true;
    for(int i=0;i<3 && ba;i++)
      if(fa(sa[i],5+2*(i%2)))
      {
        ba=false;
        cout<<i+1<<endl;
      }
    if(ba)cout<<"Y"<<endl;
  }
  //system("pause");
}
