#include<iostream>
#include<sstream>
using namespace std;
long long int va[500000];

void fb(char fca,long long int &fia)
{
  if(fca=='(')return;
  fia--;
  int ia=va[fia-1],ib=va[fia];
  if(fca=='+')va[fia-1]=ia+ib;
  else if(fca=='-')va[fia-1]=ia-ib;
  else if(fca=='*')va[fia-1]=ia*ib;
  else if(fca=='/' && ib!=0)va[fia-1]=ia/ib;
  else if(fca=='%' && ib!=0)va[fia-1]=ia%ib;
}

int main()
{
    string sa;
    long long int ia,ib;//ib 計算va的資料量
    istringstream sina,sinb;
    while(getline(cin,sa))
    {
      sina.clear();
      ib=0;
      sina.str(sa);
      while(sina>>sa)
      {
        if('0'<=sa[0] && sa[0]<='9')
        {
          sinb.clear();
          sinb.str(sa);
          sinb>>ia;
          va[ib++]=ia;
        }
        else fb(sa[0],ib);
      }
      cout<<va[0]<<endl;
    }
    //system("pause");
}
