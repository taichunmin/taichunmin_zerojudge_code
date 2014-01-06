#include<iostream>
using namespace std;

int main()
{
  char ca[1001];
  while(cin.getline(ca,1001))
  {
    int strl=strlen(ca);
    bool ba=true;
    for(int i=0;i<strl-i-1;i++)
      if(ca[i]!=ca[strl-i-1])
      {
        ba=false;
        break;
      }
    if(ba)cout<<"yes"<<endl;
    else cout<<"no"<<endl;
  }
}
