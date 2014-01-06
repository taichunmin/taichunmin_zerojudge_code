#include<iostream>
using namespace std;

bool inline fa(char ca)
{
  return ('A'<=ca && ca<='Z') || ('a'<=ca && ca<='z') || ('0'<=ca && ca<='9') || ca=='-' || ca=='\'' || ca<0;
}
int main()
{
  string sa;
  int count=0;
  while(cin>>sa)
  {
    bool sign=false;
    for(int i=0;i<sa.size();i++)
      if(sign ^ fa(sa[i]))
      {
        count+=sign;
        sign=!sign;
      }
    count+=sign;
  }
  cout<<count<<endl;
  //system("pause");
}
