#include<iostream>
using namespace std;

string fa(string sa)
{
  for(int i=0;i<sa.size()/2;i++)
    swap(sa[i],sa[sa.size()-i-1]);
  return sa;
}

string fb(string sa)
{
  int ib;
  for(int i=0;i<sa.size();i++)
  {
    ib=(sa[i]-'0');
    if(i+(ib>9)>sa.size()-1)sa.append(i+(ib>9)+1-sa.size(),'0');
    if(ib/10)sa[i+1]+=ib/10;
    sa[i]=ib%10+'0';
  }
  return sa;
}

string fc(string sa,char ca,string sb)
{
  int ia=(sa.size()>sb.size()?sa.size():sb.size()),ib;
  sa=fa(sa);
  sb=fa(sb);
  string sc(ia,'0');
  for(int i=0;i<sa.size() && ca=='*';i++)
  {
    for(int j=0;j<sb.size();j++)
    {
      ib=(sa[i]-'0')*(sb[j]-'0');
      if(i+j+(ib>9)>sc.size()-1)sc.append(i+j+(ib>9)+1-sc.size(),'0');
      if(ib/10)sc[i+j+1]+=ib/10;
      sc[i+j]+=ib%10;
    }
    sc=fb(sc);
  }
  for(int i=0;i<ia && ca=='+';i++)
    sc[i]=(i<sa.size()?sa[i]:'0')-'0'+(i<sb.size()?sb[i]:'0');
  sc=fb(sc);
  return fa(sc);
}

bool fd(string sa)
{
  bool ba=true;
  for(int i=0;i<sa.size();i++)
    if(sa[i]!='0')
    {
      sa.assign(sa,i,sa.size()-i);
      ba=false;
      break;
    }
  if(ba)return false;
  if(sa.size()!=10)return (sa.size()>10);
  return (sa>"2147483647");
}

int main()
{
  string sa,sb;
  char ca;
  while(cin>>sa>>ca>>sb)
  {
    cout<<sa<<' '<<ca<<' '<<sb<<endl;
    if(fd(sa))cout<<"first number too big"<<endl;
    if(fd(sb))cout<<"second number too big"<<endl;
    if(fd(fc(sa,ca,sb)))cout<<"result too big"<<endl;
  } 
  //system("pause");
}
