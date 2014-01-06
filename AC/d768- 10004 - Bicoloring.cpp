#include<iostream>
using namespace std;

int va[200][200];

struct ta_t
{
  string s;
  int c;
}ta;

void fa(int fia,int fib)
{
  ta.s[fia]='0'+fib;
  ta.c++;
  if(ta.c==ta.s.size())return;
  for(int i=0;i<ta.s.size();i++)
    if(ta.s[i]=='0' && va[fia][i]!=0)
      fa(i,3-fib);
}

int main()
{
  int ia,ib;
  while(cin>>ia>>ib,ia)
  {
    memset(va,0,200*200*sizeof(int));
    for(int i=0;i<ib;i++)
    {
      int ic,id;
      cin>>ic>>id;
      va[ic][id]=va[id][ic]=1;
    }
    ta.s.assign(ia,'0');
    ta.c=0;
    fa(0,1);
    if(ta.c!=ta.s.size())cout<<"error ";
    bool ba=true;
    for(int i=0;i<ia && ba;i++)
      for(int j=i+1;j<ia && ba;j++)
        if(va[i][j]==1 && ta.s[i]==ta.s[j])ba=false;
    if(!ba)cout<<"NOT ";
    cout<<"BICOLORABLE."<<endl;
  }
  //system("pause");
}
