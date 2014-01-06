#include<iostream>
using namespace std;

bool ba;

struct ta_t
{
  short va[5],b;
  long long lb;
};
void fa(ta_t ta,int fia,int fib)
{
  switch(fib)
  {
    case 0:
      ta.lb+=ta.va[fia]; break;
    case 1:
      ta.lb-=ta.va[fia]; break;
    case 2:
      ta.lb*=ta.va[fia]; break;
  }
  ta.va[fia]=-1;
  ta.b++;
  if(ta.b==5)
  {
    if(ta.lb==23)ba=false;
    return;
  }
  for(int i=0;i<5 && ba;i++)
    for(int j=0;j<3 && ba;j++)
      if(ta.va[i]>0)fa(ta,i,j);
}

int main()
{
  ta_t ta;
  while(cin>>ta.va[0])
  {
    int ia=ta.va[0];
    for(int i=1;i<5;i++)
    {
      cin>>ta.va[i];
      ia+=ta.va[i];
    }
    if(ia==0)break;
    ba=true;
    ta.b=ta.lb=0;
    for(int i=0;i<5;i++)
      fa(ta,i,0);
    if(ba)printf("Impossible\n");
    else printf("Possible\n");
  }
  //system("pause");
}
