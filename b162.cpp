#include<iostream>
using namespace std;

int ia[200000][2];

int main()
{
  int ib=0,ta;
  while(cin>>ta)
  {
    bool ba=true;
    for(int i=0;i<ib;i++)
      if(ia[i][0]==ta)
      {
        ia[i][1]++;
        ba=false;
        break;
      }
    if(ba)
    {
      ia[ib][0]=ta;
      ia[ib][1]=1;
    }
    
