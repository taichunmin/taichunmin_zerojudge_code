#include<iostream>
using namespace std;

int f(char ca)
{
  if('0'<=ca && ca<='9')return ca-'0';
  return ca-'A'+10;
}

int main()
{
  cout<<"�Q���i���ܪk  �۹�M���Q�i���ܪk"<<endl;
  char ca[10];
  while(cin>>ca)
    cout<<"      "<<ca<<"                 "<<f(ca[0])*16+f(ca[1])<<endl;
}
