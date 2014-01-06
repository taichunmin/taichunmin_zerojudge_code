#include<iostream>
#include<cmath>
using namespace std;

int fa(int,char,char,char);
int fb(int,char,char,char);
int fc(int,char,char,char);
int ff(int,char,char,char);

int fa(int ia,char ib='a',char ic='b',char id='c')
{
  if(ia<1)return 0;
  int total=0;
  total+=ff(ia-1,ib,id,ic);
  cout<<"ring "<<ia<<" : "<<ib<<" -> "<<id<<endl;
  total++;
  total+=fb(ia-2,ib,ic,id);
  return total;
}

int fb(int ia,char ib='a',char ic='b',char id='c')
{
  if(ia<1)return 0;
  int total=0;
  total+=ff(ia-1,ic,id,ib);
  cout<<"ring "<<ia<<" : "<<ic<<" -> "<<id<<endl;
  total++;
  total+=ff(ia-2,ib,ic,id);
  cout<<"ring "<<ia-1<<" : "<<ib<<" -> "<<ic<<endl;
  total++;
  total+=fc(ia-2,ib,ic,id);
  return total;
}

int fc(int ia,char ib='a',char ic='b',char id='c')
{
  if(ia<1)return 0;
  int total=0;
  total+=ff(ia-2,id,ic,ib);
  cout<<"ring "<<ia-1<<" : "<<id<<" -> "<<ic<<endl;
  total++;
  total+=fa(ia-2,ib,ic,id);
  return total;
}

int ff(int ia,char ib,char ic,char id)
{//           來源     暫存     目標 
  if(ia<1)return 0;
  int total=0;
  total+=ff(ia-1,ib,id,ic);
  cout<<"ring "<<ia<<" : "<<ib<<" -> "<<id<<endl;
  total++;
  total+=ff(ia-1,ic,ib,id);
  return total;
}

int main()
{
  int ia;
  while(cin>>ia)
  {
    ia=fa(ia);
    cout<<"共移動了 "<<ia<<" 步"<<endl;
  }
} 
