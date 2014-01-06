#include<iostream>
using namespace std;

int f(char ca)
{
  if('0'<=ca && ca<='9')return ca-'0';
  return ca-'A'+10;
}

int main()
{
  cout<<"十六進位表示法  相對映的十進位表示法"<<endl;
  char ca[10];
  while(cin>>ca)
    cout<<"      "<<ca<<"                 "<<f(ca[0])*16+f(ca[1])<<endl;
}
