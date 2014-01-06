#include<iostream>
using namespace std;

int main()
{
  char ca[40];
  double da,db=0;
  int ia,ib,ic,id=0,ta;
  while(cin>>ta)
  {
    for(id=0;id<ta;id++)
    {
      cin>>ca;
      ia=ib=ic=0;
      for(int i=1;i<9;i++)
      {
        ia*=2;
        ia+=ca[i]-'0';
      }
      ia-=127;
      ib=1;
      for(int i=9;i<32;i++)
      {
        ib*=2;
        ic++;
        ib+=ca[i]-'0';
      }
      da=ib;
      for(int i=23;i>ia;i--)da/=2;
      for(int i=23;i<ia;i++)da*=2;
      if(ca[0]=='1')da*=-1;
      cout<<"¦r¦ê"<<id+1<<" "<<ca<<" = "<<da<<endl;
      db+=da;
    }
    cout<<"Á`©M¬°"<<db<<endl;
  }
} 
