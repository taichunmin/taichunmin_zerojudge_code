#include<iostream>
#include<sstream>
using namespace std;
#define MAX_COST 2147483647
struct array2
{
  int e[200][200];
}va[2],*pre,*now,empty,cost;
void inline fa(int ra,int rb,int rvalue)
{
  if(ra>rb)swap(ra,rb);
  if(now->e[ra][rb]>rvalue)now->e[ra][rb]=rvalue;
}
int main()
{
  for(int i=0;i<200;i++)
  {
    empty.e[i][i]=0;
    for(int j=i+1;j<200;j++) empty.e[i][j]=MAX_COST;
  }
  int ia;
  istringstream ssin;
  string sa;
  while(cin>>ia)
  {
    for(int i=0;i<ia;i++)
      for(int j=0;j<ia;j++)
        scanf(" %d",&cost.e[i][j]);
    getchar();
    getline(cin,sa);
    ssin.clear();
    ssin.str(sa);
    va[1]=empty;
    va[1].e[0][1]=0;
    int p_pre=3,p_now;
    pre=&va[0];
    now=&va[1];
    while(ssin>>p_now)
    {
      if(p_now==p_pre)continue;
      swap(pre,now);
      *now=empty;
      for(int i=0;i<ia;i++)
        for(int j=i+1;j<ia;j++)
          if(pre->e[i][j]!=MAX_COST)
          {
            fa(i,j, pre->e[i][j] + cost.e[p_pre-1][p_now-1]);
            fa(p_pre-1,j, pre->e[i][j] + cost.e[i][p_now-1]);
            fa(i,p_pre-1, pre->e[i][j] + cost.e[j][p_now-1]);
          }
      p_pre=p_now;
    }
    p_pre=now->e[0][1];
    for(int i=0;i<ia;i++)
      for(int j=i+1;j<ia;j++)
        if(p_pre>now->e[i][j])p_pre=now->e[i][j];
    printf("%d\n",p_pre);
  }
}
