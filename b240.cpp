#include<iostream>
using namespace std;

struct sBook
{
  string author,name;
  int year;
};
char vb[]="XOBCDAFGHUJKLMNIPQRSTEVWYZ";
int order[128]={};

int fa(string sa,string sb)
{
  int strl=sa.size();
  if(strl>sb.size())strl=sb.size();
  for(int i=0;i<strl;i++)
    if( order[sa[i]] != order[sb[i]] )return order[sa[i]]-order[sb[i]];
  if(strl<sa.size())return 1;
  else if(strl<sb.size())return -1;
  return 0;
}

int cmp(const void* fia,const void* fib)
{
  sBook *a=(sBook*)fia,*b=(sBook*)fib;
  int res=fa(  a->author  ,  b->author  );
  if(res!=0)return res;
  if(a->year!=b->year)return a->year-b->year;
  return fa(a->name,b->name);
}
  
int main()
{
  for(int i=0;i<128;i++)order[i]=i;
  for(int i=0;vb[i]!=0;i++)
  {
    order[vb[i]]=i+'A';
    order[vb[i]+'a'-'A']=i+'a';
  }
  int ia;
  cin>>ia;
  cin.get();
  string garbage;
  sBook va[10000];
  for(int i=0;i<ia;i++)
  {
    getline(cin,va[i].author,',');
    getline(cin,va[i].name,'(');
    cin>>va[i].year;
    getline(cin,garbage);
  }
  qsort(&va[0],ia,sizeof(va[0]),cmp);
  for(int i=0;i<ia;i++)
    cout<<va[i].author<<","<<va[i].name<<"("<<va[i].year<<")"<<endl;
  //system("pause");
}
