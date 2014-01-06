#include<iostream>
using namespace std;

string aa[801];

string fa(string sa,int ia)
{
  string ra;
  int ib;
  if(sa.size()==0)
  {
    sa.resize(1);
    sa[0]=0;
    return sa;
  }
  ra.resize(sa.size());
  for(int i=0;ia>0;i++,ia/=10)
  {
    for(int k=0;k<sa.size();k++)
    {
      ib=sa[k]*(ia%10);
      if(k+i+(ib>9)>=ra.size())ra.resize(k+i+1+(ib>9));
      ra[k+i]+=ib%10;
      ra[k+i+1]+=ib/10;
    }
    for(int k=0;k<ra.size();k++)
      if(ra[k]>9)
      {
        if(k+1>=ra.size())ra.resize(k+2);
        ra[k+1]+=ra[k]/10;
        ra[k]%=10;
      }
  }
  return ra;
}
string fb(string sa)
{
  if(sa.size()==0 || (sa.size()==1 && sa[0]==0))return "0";
  for(int k=0;k<sa.size();k++)sa[k]+='0';
  for(int k=0;k<sa.size()/2;k++)sa[k]^=sa[sa.size()-k-1]^=sa[k]^=sa[sa.size()-k-1];
  return sa;
}
string fc(string sa,bool ba)
{
  if(ba)
  {
    sa[0]++;
    for(int i=0;i<sa.size();i++)
      if(sa[i]>9)
      {
        if(i+1>=sa.size())sa.resize(i+2);
        sa[i+1]+=sa[i]/10;
        sa[i]%=10;
      }
  }
  else
  {
    ba=true;
    for(int i=0;i<sa.size() && ba;i++)
      if(sa[i]>0)
      {
        sa[i]--;
        ba=false;
      }
      else sa[i]+=9;
  }
  return sa;
}     

int main()
{
  for(int i=2;i<=800;i++)
  {
    aa[i]=fa(aa[i-1],i);
    aa[i]=fc(aa[i],i%2==0);
  }
  for(int i=1;i<=800;i++)aa[i]=fb(aa[i]);
  int ia;
  while(cin>>ia,ia>0)
    cout<<aa[ia]<<endl;
}

/*
1!(1-1/(1!))    //因為不管怎麼減都是零，所以後面的皆省略
2!(1/(2!))
3!(1/(2!)-1/(3!))
4!(1/(2!)-1/(3!)+1/(4!))
*/
