#include<iostream>
#include<sstream>
using namespace std;
long long int va[500000];

long long int fa(char ca)
{
  if(ca=='(')return 1;
  if(ca==')')return 2;
  if(ca=='+' || ca=='-')return 3;
  if(ca=='*' || ca=='/' || ca=='%')return 4;
  return 10;
}
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
    string sa,sb;
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
        else
        {
          while(sb.size()>0 && sa[0]!='(' && fa(sa[0]) <= fa(sb[sb.size()-1]))
          {
              fb(sb[sb.size()-1],ib);
              sb.resize(sb.size()-1);
          }
          if(sa[0]!=')')sb+=sa[0];
          else sb.resize(sb.size()-1);
          //cout<<"! sb="<<sb<<endl;
        }
      }
      while(sb.size()>0)
      {
          fb(sb[sb.size()-1],ib);
          sb.resize(sb.size()-1);
      }
      cout<<va[0]<<endl;
    }
    system("pause");
}
